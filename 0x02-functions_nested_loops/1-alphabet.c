#include "main.h"
#include <unistd.h> // Include the required header for the write function

/**
 * _putchar - Writes a character to the standard output (stdout).
 *
 * @c: The character to be written.
 * Return: On success, the character written, otherwise -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
        _putchar(ch);

    _putchar('\n');
}
	
