#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string variable
 *
 * Return: 0 Success
 */

void rev_string(char *s)
{
	int length;
	int a;
	int half;

	char temp;

	for (length = 0; s[length] != '\0'; length++)
		a = 0;

	half = length / 2;

	while (half--)
	{
		temp = s[length - a - 1];
		s[length - a - 1] = s[a];
		s[a] = temp;
		a++;
	}
}
