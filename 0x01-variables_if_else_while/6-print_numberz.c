#include <stdio.h>

/**
 * main - Entry point
 *
 * program to print single digit numbers
 *
 * Return: 0 Success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + 48);
	putchar('\n');
	return (0);
}
