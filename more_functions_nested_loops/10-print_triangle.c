#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: integer.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int m, k, b;


	if (size > 0)
	{
		for (m = 1 ; m <= size ; m++)

		{
			for (k = 1 ; k <= size - m ; k++)

			{
				_putchar(' ');

			}

			for (b = 1 ; b <= m ; b++)

			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else

	{
		_putchar('\n');
	}

}
