#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory
 * @s: pointer
 * @b: constant
 * @n: bytes max
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *pt = s;

	while (n--)
		*s++ = b;

	return (pt);
}

/**
 * *_calloc - allocate memory for array
 * @nmemb: array len
 * @size: element size
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;

	if (size == 0 || nmemb == 0)
		return (NULL);
	x = malloc(sizeof(int) * nmemb);

	if (x == 0)
	{
		return (NULL);
	}
	_memset(x, 0, sizeof(int) * nmemb);

	return (x);
}
