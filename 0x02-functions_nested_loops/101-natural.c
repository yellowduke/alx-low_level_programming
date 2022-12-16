#include <stdio.h>

/**
 * main - print sume of multiples of 3 or 5 below 1024
 * Return: Always 0.
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (1 % 5 == 0))
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
