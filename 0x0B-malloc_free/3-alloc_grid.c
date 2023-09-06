#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: a 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
	int **twodi, i, j;

	twodi = malloc(sizeof(*twodi) * height);

	if (width <= 0 || height <= 0 || twodi == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			twodi[i] = malloc(sizeof(**twodi) * width);
			if (twodi[i] == 0)
			{
				while (i--)
					free(twodi[i]);
				free(twodi);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				twodi[i][j] = 0;
		}
	}

	return (twodi);
}
