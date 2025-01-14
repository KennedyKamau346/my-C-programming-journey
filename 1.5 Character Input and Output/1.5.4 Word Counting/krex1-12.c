#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /* outside a word */

/* Exercise 1-12. Write a program that prints
   its input one word per line*/
// to exit the program click CTRL+D

int main()
{
    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        else if(state == OUT) {
            state = IN;
            printf("%s", "\n");
        } 
        putchar(c);      // took me a while but i figured it out 
    }
}
