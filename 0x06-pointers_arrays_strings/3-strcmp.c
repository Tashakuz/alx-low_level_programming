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
	int flag = 0;
	while (*a != '\0' && *b != '\0') // while loop
	{
		if (*a != *b)
		{
			flag = 1;
		}
		a++;
		b++;
	}
	if(*a!='\0'||*b!='\0')
		return 1;
	if (flag == 0)
		return 0;
	else
		return 1;
}
