#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: a pointer t o a character.
 *
 * @b: a pointer to a character.
 *
 * @n: an integer.
 *
 *Return: a pointer to a string.
 */
char *_memset(char *s, char b, unsigned int n)
{

	while (n--)
	{
		*s = b;
		s++;
	}
	return (s - n - 1);
}
