#include<stdio.h>
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
	int ascii_vs[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(ascii_vs[i]);

	}
	putchar('\n');

	return (0);
}
