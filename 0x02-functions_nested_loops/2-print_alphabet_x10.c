#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 *                       followed by a new line.
 */

void print_alphabet_x10(void)
{
    char ch;
    int i;
    i = 0;
    while (i < 10)
    {
        for (ch = 'a'; ch <= 'z'; ch++)
        {
            putchar(ch);
        }
    }

    putchar('\n');
    i++;
}

