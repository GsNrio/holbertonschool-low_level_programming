#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point to the program.
 *
 * @argc: an integer argument count.
 *
 * @argv: a pointer to a string.
 *
 * Return: 1 if the input contain non-digits; otherwise 0.
 */
int main(int argc, char *argv[])
{
	int a;

	a = 1;
	if (a >= 48 && a <= 57)
	{
		printf("Error\n");
		return (1);
	}
	if (a <= argc)
	{
		a++;
		a = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", a);
	}
	return (0);
}
