#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 *
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
