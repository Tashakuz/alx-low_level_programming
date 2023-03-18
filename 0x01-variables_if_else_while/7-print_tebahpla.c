#include <stdio.h>

/**
 * main - Entry point
 *
 * program to print alphabet in reverse
 *
 * Return: 0 Success
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
		putchar(alphabet);
		alphabet--;
	putchar('\n')
	return (0);
}
