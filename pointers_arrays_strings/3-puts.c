#include "main.h"
#include <stdio.h>
/**
 * _puts - prints atring followed by a newline.
 *
 * @str: pointer to a character string.
 *
 * Return: nothing.
 */
void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
