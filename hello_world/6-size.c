#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point of the program
*
*This program is for printing various
*
*type sizes on the computer it
*
*gets compiled and run on.
*
*Return: Always 0.
*
*/
int main(void)
{
	printf("Size of a char: %lu bytes\n", sizeof(char));
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long));
	printf("Size of a long long int: %lu bytes\n", sizeof(long long));
	printf("Size of a float: %lu bytes\n", sizeof(float));

	return (0);
}
