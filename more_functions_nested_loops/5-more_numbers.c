#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers from 0 to 14.
 *
 * Return: always void.
 *
 */
void more_numbers(void)
{
	int n, p;

	p = 0;

	while  (p <= 9)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
		p++;
	}
}
