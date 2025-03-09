#include "main.h"
#include <stdio.h>
/**
 *print_rev - prints a string in reverse followed by a newline.
 *
 *@s: a pointer to a character.
 *
 * Return: nothing.
 */
void print_rev(char *s)
{

	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0)

	{
		length--;
		_putchar(s[length]);
	}

	_putchar('\n');
}
