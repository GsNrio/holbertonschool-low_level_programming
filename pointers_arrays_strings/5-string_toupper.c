#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all
 * lowercase letters to uppercase.
 *
 * @i: a character to be converted.
 *
 * Return: a character.
 */
char *string_toupper(char *i)
{
	int j = 0;

	for (; i[j] != '\0'; j++)
	{
		if (i[j] >= 'a' && i[j] <= 'z')
		{
			i[j] = i[j] - 32;
		}

	}

	return (i);
}
