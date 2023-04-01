#include "main.h"

/**
 * _strcmp - function to compare two strings
 *
 * @s1: input strings
 * @s2: input string
 *
 * Return: return 0 or 1
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
