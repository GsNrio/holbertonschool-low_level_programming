#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit type in input.
 *
 * @c: an integer.
 *
 * Return: 1 if c is a digit but 0 if otherwise.
 */
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)

	{
		return (1);
	}

	else
		return (0);

}
