#include <stdio.h>
/**
* main - Entry point of this program
*
* Return: always 0
*
* This program is for printing
* the lowercase alphabet
* without the letters q and e
* followed by a new line
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}

		putchar(c);
	}

	putchar('\n');

	return (0);
}
