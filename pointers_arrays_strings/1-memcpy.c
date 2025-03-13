#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area from src to dest.
 *
 * @dest: pointer to a string where data should be copied.
 *
 * @src: pointer to a string from which the data is copied.
 *
 * @n: an unsigned integer that is the number of bytes to copy.
 *
 *Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest - n - 1);
}
