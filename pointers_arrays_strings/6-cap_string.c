#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: a pointer to a string.The function will
 * capitalize the first letter of each word in the string,
 * where words are separated by spaces, punctuation,
 * or special characters.
 *
 * Return: a pointer to the modified string.
 */
char *cap_string(char *str)

{

	int c = 0;
	int n = 1;

	while (str[c] != '\0')
	{
		if (n && str[c] >= 'a' && str[c] <= 'z')
		{
			str[c] = str[c] - 32;
			n = 0;
		}
		else if (str[c] == ' ' || str[c] == '\t' || str[c] == '\n' ||
				str[c] == ',' || str[c] == ';' ||
				str[c] == '.' || str[c] == '!' ||
				str[c] == '?' || str[c] == '"' ||
				str[c] == '(' || str[c] == ')' ||
				str[c] == '{' || str[c] == '}')
		{
			n = 1;
		}
		else
		{
			n = 0;
		}
		c++;
	}
	return (str);
}
