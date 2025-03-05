#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: integer.
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int (m);
	int (k);


	if (n > 0)
	{
		for (m = 0 ; m < n ; m++)
		{
			for (k = 0; k < m; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
