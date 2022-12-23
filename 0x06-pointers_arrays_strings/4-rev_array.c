#include "main.h"

/**
 * reverse_array - reverseb array of elements
 * @a: array
 * @n: the number of elements in array
 */

void reverse_array(int *a, int n);
{
	int tmp, beg = 0;
	int end = n - 1; /* omit null terminator in lenth */

	while (beg < end)
	{
		tmp = *(a + beg);
		*(a + beg) = *a(a + end);
		*(a + end) = tmp;
		beg++, end--;
	}
}
