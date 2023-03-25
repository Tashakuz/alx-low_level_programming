#include "main.h"

/**
 * _isupper -function that checks for upper case letters
 *
 * @c: character variable that is checked
 *
 * Returns: 1 if true and 0 if otherwise
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);	}
	_putchar('\n');
}
