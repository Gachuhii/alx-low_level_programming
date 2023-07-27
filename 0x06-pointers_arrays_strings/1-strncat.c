#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Destination buffer.
 * @src: Source string.
 * @n: Maximum number of bytes to be appended from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, const char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Find the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append at most n characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	/* Add null-terminator to the end of the concatenated string */
	dest[dest_len] = '\0';

	return (dest);
}

