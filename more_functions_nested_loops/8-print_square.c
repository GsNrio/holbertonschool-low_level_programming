#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square, followed by a new line.
 *
 *@size: integer
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
