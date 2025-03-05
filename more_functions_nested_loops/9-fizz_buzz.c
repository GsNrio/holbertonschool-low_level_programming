#include <stdio.h>
/**
 * main -  point of th program.
 *
 * Prints the numbers from 1
 * to 100 and switches multiples of 3 and 5 for
 * text jointly or modularly followed by a newline.
 *
 *
 * Return: always 0.
 */
int main(void)
{
	int n = 1;

	for (; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("  ");

		{
			printf("%d ", n);

			if (n % 3 == 0 && n % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else if (n % 5 > 0 && n % 3 > 0)

			{
				printf("Fizz");
			}

			else if (n % 5 == 0)

			{
				printf("Buzz");
			}

		}


	}

	return (0);
}
