#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: any integer.
 *
 * Return: an integer greater than 0 if input negative or positive
 * and 0 if input 0.
*/
int _abs(int n)

{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}

	else if (n > 0)
	{
		return (n);
	}

	else
	return (0);
}


