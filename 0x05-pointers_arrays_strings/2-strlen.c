#include "main.h"

/**
 * _strlen - function to return length of string
 *
 * @s: string to be input
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}
