#include "main.h"
/**
 * print_alphabet - Prints the lowercase
 * letters of the alphabet
 *
 * Return: always 0
 *
 * Description:
 * This function prints the lowercase letters
 * of the English alphabet a to z
 * followed by a newline character.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
