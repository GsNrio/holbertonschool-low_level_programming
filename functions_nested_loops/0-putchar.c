#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: always 0
 *
 * This program prints
 * the text putchar
 * in a specified format
 * followed by a new line
 */
int main(void)
{
	char str[] = "_putchar";

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);

	}

	_putchar('\n');

	return (0);
}
