#include <stdio.h>

/* copy input to output; 1st versioin */
int main()
{
    int c;
    
    c = getchar();
    while (c != EOF) {  // use CTRL+D to exit the program
        putchar(c);
        c = getchar();
    }
}
