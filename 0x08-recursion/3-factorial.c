#include "main.h"
/**
 * factorial - returns the factorial of `n`
 * @n: integer type number
 * Description: if `n` < 0, return error(-1)
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
