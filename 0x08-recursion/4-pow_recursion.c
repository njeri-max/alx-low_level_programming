#include "main.h"
/**
 * _pow_recursion - returns value of `x` raised to power `y`
 * @x: integer value
 * @y: integer power value
 * Description: if `y` < 0, return (-1)
 * Return: x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
