#include <stdio.h>
/**
 * main - Entry point of this program
 *
 * Return: always 0
 *
 * This program prints
 * all single digit numbers with base ten
 * from zero up without the use
 * of the char type variable and
 * only by means of the putchar function
 * during up to two statements
 */
int main(void)
{
	int s;

	for (s = 0; s <= 9; s++)
	{
		putchar(s + '0');
	}
	{
		putchar('\n');
	}
	return (0);
}
