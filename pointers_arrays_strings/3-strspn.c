#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: a pointer to a character.
 * @accept: a pointer to a character.
 *
 * Return: an unsigned integer.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accept;
		int found = 0;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}
		if (!found)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
