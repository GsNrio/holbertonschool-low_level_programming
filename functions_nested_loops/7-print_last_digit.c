#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: any integer.
 *
 * Return: value of the last digit if n prints otherwise return 0
*/
int print_last_digit(int n)

{
	int h = n;

	if (h >= 10 && n < 10)

		(n = h % 10);

	_putchar (n);

	return (0);
}
