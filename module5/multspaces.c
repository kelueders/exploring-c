#include <stdio.h>

void main() {
    /* K&R Exercise 1-7. Write a program to copy its input to its output, 
    replacing each string of one or more blanks by a single blank.*/
    
    int c;
    int prev_c = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        } else if (c == ' ' && prev_c == ' ') {
            ;
        } else {
            putchar(c);
        }
        prev_c = c;
    }
}