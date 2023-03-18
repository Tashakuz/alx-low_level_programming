#include <stdio.h>

/**
 * main - Entry point
 *
 * program to print alphabet in lower case
 *
 * Return: 0 Success
 */

int main(void)
{
	char alphabet ='a';
	char alphabet1 ='A';

	while (alphabet <= 'z')
        {
		putchar(alphabet);

                alphabet++;
	}

	while (alphabet1 <= 'Z')
	{
		putchar(alphabet1);

		alphabet1++;
	}

        putchar ('\n');
        return (0);

}
