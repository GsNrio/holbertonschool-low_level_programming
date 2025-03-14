#include "main.h"
#include <stdio.h>
/**
 *_strcmp - compares two strings.
 *
 * @s1: a pointer to a string.
 *
 * @s2: a pointer to a string.
 *
 * Return: an integer.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return ((int)(*s1 - *s2));
		}
		s1++;
		s2++;
	}


	return ((int)(*s1 - *s2));
}
