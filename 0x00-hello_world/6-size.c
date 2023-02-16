#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{

	printf("Char size: %lu bytes\n", sizeof(char));
	printf("Int size: %lu bytes\n", sizeof(int)); 
	printf("Short size: %lu byte\n", sizeof(short));
	printf("Long size: %lu byte(s)\n", sizeof(long));
	return (0);
}
