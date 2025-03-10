#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * while dest will use at most certain
 * amount of bytes from src.
 *
 * @dest: a string.
 * @src: a string.
 * @n: an integer.
 *
 * Return: a pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int g = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (g < n && src[g] != '\0')
	{
		dest[i] = src[g] + 1;
		i++;
	}

	{
		dest[i] = '\0';
		return (dest);
	}
}
