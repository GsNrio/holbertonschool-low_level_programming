#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point to the program.
 *
 * @argc: character string.
 * @argv: character string.
 *
 * Return: integer.
 */
int main(int argc, char **argv)
{
	int g;

	g = 0;

	while (g < argc)
	{
		printf("%s\n", argv[g]);
		g++;
	}
	return (0);
}
