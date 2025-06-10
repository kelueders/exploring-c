#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void main() {
    int fahr;

    printf("%4s %9s\n", "FAHR", "CELSIUS");
  	printf("===============\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}