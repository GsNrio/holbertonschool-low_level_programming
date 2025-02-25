#include "main.h"
/**
 * print_sign - prints the sign of a number.
 *
 * @n: any character.
 *
 * Return: 1 if n is a greater than 0
 * or 0 if n is 0 or negative 1 if n is
 * less than 0.
*/
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar ('+');
		return (1);

	}

	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}

	else
	{
		_putchar ('0');
		return (0);
	}

	return (0);
}
