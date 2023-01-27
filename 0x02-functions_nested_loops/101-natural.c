#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 that are multiples of 3 or 5 below.
 * Return: Always 0.
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (1 % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
