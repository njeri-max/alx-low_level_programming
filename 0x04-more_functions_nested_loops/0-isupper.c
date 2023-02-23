#include "main.h"
/**
 * _isupper - the function that checks for uppercase letters
 * @c: is the int type number
 * Return: 1 if c is uppercase, otherwise return 0
 */
int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);

	return (0);
}
