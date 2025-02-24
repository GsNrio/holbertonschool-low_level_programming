#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase
 * alphabet in 10 repetition sequences in a row
 *
 * Return: always 0
 *
 * Description: This function prints
 * the lowercase letters of
 * the English alphabet a to z
 * followed by a newline character.
*/
void print_alphabet_x10(void)
{
	char c = 'a';

	int g = 0;

	while (g <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		g++;
		_putchar('\n');
	}
}
