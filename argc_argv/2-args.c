#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point to the program.
 *
 * @argc: number of arguments in the program.
 *
 * @argv: array of arguments in the program.
 *
 * Return: nothing.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i;

	i = 0;
	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
