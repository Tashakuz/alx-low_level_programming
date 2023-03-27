#include "main.h"

/**
 * _puts - function to print a string
 *
 * @str: string variable
 *
 * Return: 0 Success
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(str);
	}
	_putchar('\n');
}
