#include "main.h"
/**
 * swap_int - swaps the values of 2 integers
 * @a: first integer pointer type
 * @b: second integer pointer type
 */
void swap_int(int *a, int *b)
{
	int ex;

	ex = *a;
	*a = *b;
	*b = ex;
}
