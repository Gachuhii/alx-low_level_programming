#include "main.h"

/**
 * _sqrt_helper - Helper function to recursively find the square root.
 * @n: The number for which to find the square root.
 * @start: The starting value of the search range.
 * @end: The ending value of the search range.
 *
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid;
	int square;

	if (start > end)
		return (-1);

	mid = start + (end - start) / 2;
	square = mid * mid;

	if (square == n)
		return (mid);
	else if (square < n)
		return (_sqrt_helper(n, mid + 1, end));
	else
		return (_sqrt_helper(n, start, mid - 1));
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0, n));
}

