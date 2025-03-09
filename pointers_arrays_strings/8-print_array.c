#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an amount
 * of integers from an array
 * followed by a newline.
 *
 *@a: a pointer to an integer array.
 *
 * @n: an integer.
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
