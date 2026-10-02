#include <stdio.h>
#include <stdlib.h>
#include "core.h"

int main() {
	// Example usage of the core functionality
	int result = core_function();
	if (result) {
		printf("Success!\n");
	} else {
		printf("Failure!\n");
	}
	return 0;
}