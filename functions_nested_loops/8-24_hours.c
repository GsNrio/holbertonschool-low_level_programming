#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - function that prints
 * minutes 0:00 to 23:59 of the day
 * of Jack Bauer.
 *
 * @void: no return.
 *
 * Return: void
 */
void jack_bauer(void)
{

	int h = 0;
	int m;

	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{

			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}



}
