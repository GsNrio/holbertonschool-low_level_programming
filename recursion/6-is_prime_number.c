#include "main.h"
#include <stdio.h>
#include <math.h>
#ifndef MAIN_H
#define MAIN_H
/**
 * main - entry point to the program.
 *
 * @n: an integer.
 *
 * Return: an integer.
 */
int is_prime_number(int n);
int actual_sqrt_recursion(int n, int s);

int main(void)
{
	int n;

	n = 1;

	if (is_prime_number(n))
		return (1);
	else
		return (0);
}
#endif
/**
 * is_prime_number - returns 1 if the number is prime otherwise 0.
 *
 * @n: A number to check for primality.
 *
 * Return: 1 if the number is prime, 0 if not.
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (i == _sqrt_recursion(n))
		i++;
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
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
