#include "main.h"

/**
 * _islower - returns 1 if c is lowercase and 0 if otherwise
 *
 * Return: 0 Success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
