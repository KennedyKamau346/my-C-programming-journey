#include <stdio.h>

/* Exercise 1-9. Write a program to copy its input to its output,
   replacing each string of one or more blanks by a single blank.*/
int main()
{
    int c, bl;
    bl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!bl){
                putchar(c);
                bl = 1;
            }
        } else {
            putchar(c);
            bl = 0;
        }
    }

}