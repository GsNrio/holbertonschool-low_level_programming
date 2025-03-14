#include "main.h"
#include <stdio.h>

/**
 * actual_sqrt_recursion - Recurses to find
 * the natural square root of a number.
 * @n: The number to find the square root of.
 * @s: The current guess for the square root.
 *
 * Return: The resulting square root, or -1 if
 * no square root is found.
 */
int actual_sqrt_recursion(int n, int s)
{
	if (s * s == n)
		return (s);
	if (s * s > n)
		return (-1);
	return (actual_sqrt_recursion(n, s + 1));
}

/**
 * _sqrt_recursion - Returns the natural
 * square root of a number.
 * @n: The integer to find the square root of.
 *
 * Return: The resulting square root, or -1 if
 * n is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
