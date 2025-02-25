#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: the character to check
 * Description: This function takes
 * an integer representing a character
 * and checks if the character is
 * a lowercase letter.It returns 1 if
 * the character is lowercase
 * otherwise it returns 0.
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	return (0);
}
