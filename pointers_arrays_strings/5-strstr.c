#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring.
 *
 * @haystack: a pointer to a string
 * in which a substring is searched for.
 * @needle: a pointer to a substring that
 * is being searched for within the string.
 *
 * Return: a pointer to the first
 * character in the substring.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *h = haystack;
			char *n = needle;

			while (*h == *n && *n != '\0')
			{
				h++;
				n++;
			}
			if (*n == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
