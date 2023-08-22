#include "main.h"

/**
 * print_array - output elements of an array
 * @n: elements parameter
 * @a: string parameter
 * Return: Anything
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
