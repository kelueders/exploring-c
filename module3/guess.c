#include <stdio.h>

void main() {
    int guess;
    const int ANS = 42;

    printf("Enter a number: \n");
    while (scanf("%d", &guess) != EOF) {
        if (guess == ANS) {
            printf("Nice work!\n");
            break;
        } else if (guess < ANS) {
            printf("Too low - guess again\n");
        } else {
            printf("Too high - guess again\n");
        }
    }
}