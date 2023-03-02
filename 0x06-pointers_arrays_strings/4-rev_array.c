#include "main.h"
/**
 * reverse_array - reverses the contents of arrays
 * @a: input array
 * @n: positions in the arrays
 */
void reverse_array(int *a, int n)
{
	int j, temp;

	temp = n - 1;
	for (j = 0; j < n / 2; j++)
	{
		int start, end;

		start = a[j];
		end = a[temp];
		a[j] = end;
		a[temp] = start;
		end--;
	}
}
