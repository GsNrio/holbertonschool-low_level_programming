#include <stdio.h>
/**
 * main - Entry point of this program
 *
 * Return: always 0
 *
 * This program
 * prints all single digits
 * of base ten
 * starting with zero
 * followed by a new line
 */
int main(void)

{
	int s;

	for (s = 0; s <= 9; s++)

	{
		printf("%d", s);
	}
	printf("\n");
	return (0);
}

