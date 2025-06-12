#include <stdio.h>
main() {
    /* Write a program which prints the words in its input, one per line. 
    A word is any string separated by a space or newline.*/
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar('\n');
        } else {
            putchar(c);
        }
    }
}