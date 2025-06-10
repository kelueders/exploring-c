#include <stdio.h>
int main() /* count new lines in input */
{
    int c, nl, bl;
    nl = 0;
    bl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        else if (c == ' ')
            ++bl;
    };
    printf("\n%d %d\n", bl, nl);
}