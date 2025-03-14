#include "main.h"
#include <stdio.h>
#include <math.h>

int actual_sqrt_recursion(int n, int s)

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: an integer.
 *
 * Return: the resulting square root.
*/
int _sqrt_recursion(int n);
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

 /**
 * actual _sqrt_recursion - recurses to find the natural
 * aquare root of a number
 *
 * @n: an the number to which find the square root.
 * @s: the current guess for the square root.
 *
 *Return: the resulting square root.
*/

int actual_sqrt_recursion(int n, int s)
{
	if (s * s == n)
		return (s);
	if (s * s > n)
		return (-1);
	return (actual_sqrt_recursion(n, s + 1));
}
