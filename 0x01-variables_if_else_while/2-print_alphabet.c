#include <stdio.h>

/**
 * main - Entry point
 *
 * program to print alphabet in lower case
 *
 * Return: 0 Success
 */

int main (void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;

	}

	putchar ('\n');
	return (0);

}
