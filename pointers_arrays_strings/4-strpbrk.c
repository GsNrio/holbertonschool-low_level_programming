#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - searches a string for any of a set of bytes.
 *
 * @s: a pointer to a string in which the function searches..
 * @accept: a pointer to a string of
 * the characters to be searched for.
 *
 *Return: a character.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}

