#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string.
 *
 *@s: a pointer to a character.
 *@c: a character.
 *
 *Return: a character.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}


