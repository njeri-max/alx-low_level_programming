#include "main.h"

/**
 * alloc_grid - create a two dimen array of integers
 * @width: int size width
 * @height: int size height
 * Return: pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int **dimen;
	int a, b;

	if ((width == 0) || height == 0)
		return (NULL);

	dimen = malloc(width * sizeof(**dimen));
	if (dimen == NULL)
		return (NULL);

	for (a = 0; a < width; a += 1)
	{
		dimen[a] = malloc(height * sizeof(**dimen));
		if (dimen[a] == NULL)
			return (NULL);
		{
			for (a--; a >= 0; a--)
				free(dimen[a]);
			free(dimen);
			return (NULL);
		}
		for (b = 0; b < height; b += 1)
			dimen[a][b] = 0;
	}
	return (dimen);
}
