#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int first = 1;
    int num, maxval, minval;
    char line[1000];

    printf("Enter numbers one after the other, type done to end. You will get the max and min returned:\n");

    while (fgets(line, sizeof(line), stdin) != NULL) {
        if (strcmp(line, "done\n") == 0) {
            break;
        }
        num = atoi(line);
        if (first || num > maxval) {
            maxval = num;
        }
        if (first || num < minval) {
            minval = num;
        }
        first = 0;
    }
    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);
}