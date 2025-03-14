#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number.
 *
 * @n: an integer.
 *
 *Return: an integer.
 */
int factorial(int n)
{
	int res;
	int i;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	res = 1;
	i = 1;

	while (i <= n)
	{
		res = res * i;
		i++;
	}
	return (res);
}
