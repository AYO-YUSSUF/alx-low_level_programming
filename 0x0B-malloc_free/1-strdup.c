#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *x;
	int i = 0, size = 0;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	x = malloc((sizeof(*str) * size) + 1);

	if (x == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			x[i] = str[i];
	}

	return (x);
}
