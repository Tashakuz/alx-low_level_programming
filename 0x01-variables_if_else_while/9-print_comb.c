#include <stdio.h>

/**
 * main - main function
 *
 * program to print all possible combinations of single digit numbers
 *
 * Return: 0 Success
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}

	return (0);
}
