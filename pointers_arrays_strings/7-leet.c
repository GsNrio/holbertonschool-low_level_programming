#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337.
 *
 * @str: a pointer to a string.
 *
 * Return: a character.
 */
char *leet(char *str)
{
	int c = 0;
	int i = 0;
	char str1[] = {'a', 'A', 'e', 'E',
		'o', 'O', 't', 'T', 'l', 'L'};

	char str2[] = {'4', '4', '3', '3', '0',
		'0', '7', '7', '1', '1'};


	while (str[c] != '\0')
	{
		i = 0;
		for (; i < 10; i++)
		{
			if (str[c] == str1[i])
			{
				str[c] = str2[i];
				break;
			}
		}
		c++;
	}
	return (str);
}

