#include "main.h"
/**
 * _strncpy - Copies a string.
 * @dest: Destination buffer.
 * @src: Source string.
 * @n: Maximum number of bytes to be copied from src.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Pad the remaining space in dest with null bytes */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

