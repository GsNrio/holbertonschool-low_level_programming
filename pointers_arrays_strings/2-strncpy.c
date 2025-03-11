#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string and
 * covers left over memory on the
 * destination string  with nullbytes.
 *
 * @src: a pointer to a string.
 *
 * @dest: a pointer to a string.
 *
 * @n: an integer.
 *
 * Return: a pointer to a string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int w = 0;

	while (w < n && src[w] != '\0')
	{
		dest[w] = src[w];
		w++;
	}

	while (w < n)
	{
		dest[w] = '\0';
		w++;
	}
	return (dest);
}
