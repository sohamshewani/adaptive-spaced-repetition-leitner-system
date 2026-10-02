CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c11 -Iinclude
OBJS=src/core.o
SRCS=src/core.c
TEST_OBJS=test_runner.o
TEST_SRCS=test_runner.c

all: $(OBJS) $(TEST_OBJS) main

main: $(OBJS)	gcc $(CFLAGS) -o main $^ -lm

$(OBJS): %.o: %.c $(SRCS)	gcc $(CFLAGS) -c $< -o $@

$(TEST_OBJS): %.o: %.c $(SRCS)	gcc $(CFLAGS) -c $< -o $@

check: main	run_tests

test: $(TEST_OBJS)	gcc $(CFLAGS) -o test_runner $^ -lm
test_runner: $(TEST_OBJS)	run_tests

run_tests: main test_runner	./test_runner

.PHONY: check test run_tests
