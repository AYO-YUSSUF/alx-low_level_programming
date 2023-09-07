#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - alloates using malloc and exit
 * @b: int
 * Return: a pointer to the array, or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
		exit(98);

	return (x);
}
