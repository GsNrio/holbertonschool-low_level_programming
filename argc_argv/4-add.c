#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int a, n;
	int f;
	int k;

	f = 1;
	k = 0;

	for (; f < argc; f++)
	{
		for (; argv[f][k] != '\0'; k++)
		{
			if (!isdigit(argv[f][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	a = atoi(argv[1]);
	n = atoi(argv[2]);

	printf("%d\n", a + n);

	return (0);
}
