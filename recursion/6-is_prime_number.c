#include "main.h"
#include <stdio.h>
#include <math.h>
#ifndef MAIN_H
#define MAIN_H
/**
 * main - entry point to the program.
 *
 * @n an integer.
 *
 * Return: an integer.
 */
int is_prime_number(int n);

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

	for (; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
