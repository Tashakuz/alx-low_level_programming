#include "main.h"

/**
 * print_last_digit - function to print last digit of number
 *
 * @n: input value which is an integer
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int i;
	i = n % 10;

	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}

	_putchar('\n');
}
