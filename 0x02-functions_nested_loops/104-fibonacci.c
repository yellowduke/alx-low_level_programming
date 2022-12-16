#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers starting with 1 and 2, separated by a coma followed by a space.
 * Return: Always 0.
 */

int main(void)
{
	int count, overflow;
	unsigned long a = 1;
	unsigned long b = 1;
	unsigned long sum = 0;
	long a_head, a_tail, b_head, b_tail, sum_head, sum_tail;

	printf("1");

	for (count = 2; count < 93; count++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %lu", sum);
	}
	
	a_head = a / 10000000000;
	a_tail = a % 10000000000;
	b_head = b / 10000000000;
	b_tail = b % 10000000000;

	for (; count < 99; count++)
	{
		overflow = (a_tail + b_tail) / 1000000000;
		sum_tail = (a_tail + b_tail) - (1000000000 * overflow);
		sum_head = (a_head + b_head) + overflow;

		printf(", %lu%lu", sum_head, sum_tail);

		a_head = b_head;
		a_tail = b_tail;
		b_head = sum_head;
		b_tail = sum_tail;
	}


	printf("\n");

	return (0);
}i
