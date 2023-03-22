#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * returns 1 if true and returns 0 if otherwise
 *
 * Return: 0 Success
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
