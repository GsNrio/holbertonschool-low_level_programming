#include "main.h"
#include <stdio.h>
/**
 *reverse_array - reverses the content of an array of integers.
 *
 *@a: an integer.
 *@n: an integer.
 *
 *Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
