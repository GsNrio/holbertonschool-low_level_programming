#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: always 0
 *
 * This program
 * prints the lowercase alphabet
 * in reverse followed by a new line
 * by the exclussive prompt
 * of the function putchar
 * being used up to twice
 */

int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)

	{
		putchar (z);
	}

	return (0);
}
