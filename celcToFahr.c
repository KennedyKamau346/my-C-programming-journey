#include <stdio.h>

int main()
{
    float fahr, celcius;
    float lower, upper, step;

    lower = 0.0;
    upper = 300.0;
    step = 20;

    printf("%s", "celc | fahr\n");

    celcius = lower;
    while (celcius <= upper) {
        fahr = celcius * 9.0 / 5.0 + 32;
        printf("%4.0f %6.1f\n", celcius, fahr);
        celcius += step;
    }
}