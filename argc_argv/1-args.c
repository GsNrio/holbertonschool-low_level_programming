#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point to this program.
 *
 * @argc: count of arguments passed to the program.
 * @argv: array of arguments passed in the program.
 *
 * Return: nothing.
 *
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i;

	i = argc;

	printf("%d\n", (i - 1));
	return (0);
}
