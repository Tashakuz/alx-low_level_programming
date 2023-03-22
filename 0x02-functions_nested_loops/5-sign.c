#include "main.h"

/**
 * print_sign - checks whether n is greater than, less than or equal to 0
 *
 * @n: integer value
 *
 * Return 1 if n is greater than 0 and Returns -1 if n is less than 0
 *
 * Return 0 if n is equal to zero
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
