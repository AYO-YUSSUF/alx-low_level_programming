#include "main.h"

/**
 * reverse_array - reverses the content of an integer array
 * @a: an integter array
 * @n: number of elements
 * Return: anything
*/

void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0, y = (n - 1); x < y; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
	}
}
