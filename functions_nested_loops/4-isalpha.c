#include "main.h"
/**
 *_isalpha - checks for
 * alphabetic characters.
 *
 * @c: any character.
 *
 * Return: 1 if c is a letter
 * whether lower or uppercase and
 * 0 if otherwise.
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
