#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_rev - prints a string in reverse followed by a newline.
 *
 *@s: a pointer to a character.
 *
 * Return: nothing.
 */
void print_rev(char *s)
{

	int length = strlen(s) - 1;

	while (s[length] >= 0)

	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
