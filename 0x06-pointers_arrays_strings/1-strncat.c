#include "main.h"

/**
 * _strncat - concanate two strings but add inputted number of bytes
 *
 * @dest: string to be appended upon
 * @src: string to be completed
 * @n: integer parameter to compare index to
 *
 * Return: returns new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
