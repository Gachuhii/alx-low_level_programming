#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return:
 *  0 if s1 and s2 are equal.
 *  A negative value if s1 is less than s2.
 *  A positive value if s1 is greater than s2.
 */
int _strcmp(const char *s1, const char *s2)
{
	int diff = 0;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	diff = *s1 - *s2;

	return (diff);
}

