#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome.
 * @s: The input string to be checked.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the current comparison.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
        return 1;

    if (s[start] != s[end])
        return 0;

    return is_palindrome_helper(s, start + 1, end - 1);
}

/**
 * is_palindrome - Function that checks if a string is a palindrome.
 * @s: The input string to be checked.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = strlen(s);

    if (len <= 1)
        return 1;

    return is_palindrome_helper(s, 0, len - 1);
}

int main(void)
{
    char str1[] = "level";
    char str2[] = "hello";

    printf("%s is %s palindrome.\n", str1, is_palindrome(str1) ? "a" : "not a");
    printf("%s is %s palindrome.\n", str2, is_palindrome(str2) ? "a" : "not a");

    return 0;
}

