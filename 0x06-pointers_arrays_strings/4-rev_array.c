#include "main.h"
/**
 * reverse_array - reverses the contents of arrays
 * @a: input array
 * @n: positions in the arrays
 */
void reverse_array(int *a, int n)
{
	int j, temp;


	for (j = 0; j < (n / 2); j++)
	{

		temp = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = temp;
	}
}
