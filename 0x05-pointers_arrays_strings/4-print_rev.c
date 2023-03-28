#include "main.h"

/**
 * print_rev - function to print string in reverse
 *
 * @s: string variable
 *
 * Return: 0 Success
 */

void print_rev(char *s)
{
	int len;
	int i;

	char *start;
	char *end;
	char temp;

	len = strlen(s);
	start = s;
	end = s;

	for (i = 0; i < len - 1; i++)
		end++;

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}
