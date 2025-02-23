#include<stdio.h>
/**
 * main - Entry point of this program
 *
 * Return: 0
 *
 * This program prints out
 * all the hexadecimals
 * while employing letters
 * to the task only on lowercase
 * and the sequence is
 * followed by a new line
 */
int main(void)
{
	int i;
	char b;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
