#include "main.h"
#include <stdlib.h>
/**
 * _realloc - re allocate using malloc and free
 *
 * @ptr: pointer to previously allocated memory
 * @old_size: the size
 * @new_size: the new size
 *
 * Return: pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	unsigned int i, j = new_size;
	char *old = ptr;

	if (ptr == NULL)
	{
		x = malloc(new_size);
		return (x);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	x = malloc(new_size);
	if (x == NULL)
		return (NULL);
	if (new_size > old_size)
		j = old_size;
	for (i = 0; i < j; i++)
		x[i] = old[i];
	free(ptr);
	return (x);
}
