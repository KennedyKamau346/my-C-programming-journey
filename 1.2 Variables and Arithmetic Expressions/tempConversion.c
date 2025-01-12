#include <stdio.h>

/* print Fahrenheit-Celcius  table
   for fahr = 0, 20, ..., 300 */
int main ()
{
    float fahr, celcius;
    float lower, upper, step;

    lower = 0.0;  // lower limit of the temp scale
    upper = 300.0; // upper limit
    step = 20.0; /* step size */

    printf("%s","fahr | celcius\n");

    fahr = lower;
    while (fahr <= upper) {
        celcius = 5.0 / 9.0 * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celcius);
        fahr = fahr + step;
        
    }
}
