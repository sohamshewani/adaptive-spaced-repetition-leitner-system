#ifndef CORE_H
#define CORE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_FLASHCARDS 10000
#define MAX_QUESTION 1000
#define MAX_ANSWER 1000

typedef struct {
    char question[MAX_QUESTION];
    char answer[MAX_ANSWER];
    int repetitions;
    time_t last_review;
} Flashcard;

void initialize_flashcards(Flashcard cards[]);
void add_flashcard(Flashcard cards[], int *card_count, const char *question, const char *answer);
void review_flashcard(Flashcard cards[], int *card_count, int index);
void export_flashcards(const Flashcard cards[], int card_count, FILE *output);

#endif // CORE_H