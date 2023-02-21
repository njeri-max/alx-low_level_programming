#include "main.h"
/**
 * _isalpha - tests a character from the alphabet
 * @c: forms the test character
 * Return: 1 if the character is English
 * 0 if the character is not in English
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
