#include <stdio.h>

int main() {
    int mymult();
    int retval;

    retval = mymult(6,7);
    printf("Answer: %d\n",retval);
}

int mymult(int a, int b) {
    int c;
    c = a * b;
    return c;
}