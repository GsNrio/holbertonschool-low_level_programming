#include "main.h"
#include <stdio.h>
/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: an integer.
 *
 * Return: always 0.
 */
void print_line(int n)

{
	int (f) = 0;
	for (; f <= n ; f++)
	{


		_putchar('_');

	}

	for (; f >= n ; f--)

	{

		_putchar('_');

	}

	if (f == 0)

		_putchar(' ');

	_putchar('\n');

}


