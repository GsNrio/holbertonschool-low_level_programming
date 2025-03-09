#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character
 * of a string, starting with
 * the first character, followed by a newline.
 *
 * @str: a character string.
 *
 * Return: nothing.
 */
void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
		length++;
	}
	_putchar('\n');
}
