#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: always 0
*
* This program prints the alphabet
* fist in lowercase followed by
* in uppercase followed by a new line
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
