#include <stdio.h>

/* print Fahrenheit-Celsius table for 
fahr = 0, 20, ..., 300 */

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20;   /* step size */

    fahr = lower;
    printf("Fahrenheit to Celsius conversion\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        /* %3.0f says a floating-point number is to be printed at least 3 characters wide with no decimal
           and %6.1f says print at least 6 characters wide with 1 digit after the decimal point */
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}