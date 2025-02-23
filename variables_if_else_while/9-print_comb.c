#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: always
 *
 * This program prints
 * all possible combinations
 * of single digit numbers
 */
int main(void)
{
	int g;


	for (g = 0; g < 10; g++)

	{
		if (g != 9)
		{
			putchar(g + '0');
			putchar(',');
		}
		else
		{
			putchar(g + '0');
		}
	}
	return (0);
}
