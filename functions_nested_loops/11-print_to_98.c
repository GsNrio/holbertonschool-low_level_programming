#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a newline.
 *
 * @n: is an integer.
 *
 * Return: no return is expected.
 *
 */
void print_to_98(int n)

{
	if (n < 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	if (n > 98)
	{
		for (; n > 98;)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	
}
