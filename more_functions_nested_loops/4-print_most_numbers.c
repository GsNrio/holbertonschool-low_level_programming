#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints the numbers from 0
 * to 9 followed by a newline.
 *
 * Return: always 0.
 */
void print_most_numbers(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{

		if (n == 2 || n == 4)
		{
			continue;
		}
		_putchar(n + '0');
	}

	_putchar('\n');
}
