#include "main.h"
/**
 * _isdigit - function that checks numbers 0 through 9
 * @c: integer number to b checked
 * Return: 1 if c is digit, otherwise return 0
 */
int _isdigit(int c)
{
	if ((c >=  48) && (c <= 57))
		return (1);
	else
		return (0);
}
