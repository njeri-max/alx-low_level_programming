#include "main.h"
/**
 * cap_string - capitalize all function of a string
 * @str: string
 * Return: `str`
 */
char *cap_string(char *str)
{
	int j, k;
	int trigger;
	char sep[] =  ",;.!?(){}\n\t\" ";

	for (j = 0, trigger = 0; str[j] != '\0'; j++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			trigger = 1;
		for (k = 0; sep[k] != '\0'; k++)
		{
			if (sep[k] == str[j])
				trigger = 1;
		}

		if (trigger)
		{
			if (str[j] > 96 && str[j] < 123)
			{
				str[j] -= 32;
				trigger = 0;
			}
			else if (str[j] > 64 && str[j] < 91)
				trigger = 0;
			else if (str[j] > 47 && str[j] < 58)
				trigger = 0;
		}
	}
	return (str);
}
