#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string into an integer.
 *
 * @s: points to a character string.
 *
 * Return: the integer value of the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;


	while (*s == ' ')
		s++;


	if (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}


	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * result);
}
