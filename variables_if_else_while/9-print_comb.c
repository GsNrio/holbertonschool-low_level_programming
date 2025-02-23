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


	for (g = 0; g <= 9; g++)

	{
		putchar(g + '0');

		if (g != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
