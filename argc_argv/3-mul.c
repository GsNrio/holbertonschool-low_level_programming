#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point to the program.
 *
 * @argc: integer.
 *
 * @argv: pointer to an array of string.
 *
 * Return: 1 if the program doesn't receive two arguments; otherwise 0.
 *
*/
int main(int argc, char *argv[])
{
	int a;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", a);
		return (0);
	}
}
