#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * program prints last digit of random number
 *
 * Return: 0 Success
 */

int main(void)
{
	int n, m;
	m = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	n = m % 10;

	if(n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, m);
	}

	else if(n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, m);
	}

	else if(n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	}
	return (0);
}
