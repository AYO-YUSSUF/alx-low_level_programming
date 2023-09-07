#include <stdlib.h>
#include "main.h"

/**
 * *array_range - integers array
 * @min: minimum range
 * @max: maximum range
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *pt;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pt = malloc(sizeof(int) * size);

	if (pt == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		pt[x] = min++;

	return (pt);
}
