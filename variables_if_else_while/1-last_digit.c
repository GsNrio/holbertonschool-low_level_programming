#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: always 0.
 */
int main(void)
{
	int n;
	int rn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rn = n  % 10;
	if (rn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, rn);
	}
	else if (rn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, rn);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rn);

	}
	return (0);
}
