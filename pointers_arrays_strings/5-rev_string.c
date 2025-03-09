#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string.
 *
 * @s: a pointer to a character.
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int length = 0;
	char tmp;
	int start, end;


	while (s[length] != '\0')
	{
		length++;
	}
	start = 0;
	end = length - 1;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;

		start++;
		end--;
	}

}
