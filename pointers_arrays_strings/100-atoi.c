#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string into an integer.
 *
 * @s: points to a character.
 *
 * Return: an integer.
 */
int _atoi(char *s)
{
	int t = 1;

	int f = 0;



	if (*s == '-')
	{
		t = -1;
		s++;
	}



	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')

		{
			f = f * 10 + (*s - '0');
		}

		else

		{
			break;
		}
		s++;
	}

	return (f * t);
}
