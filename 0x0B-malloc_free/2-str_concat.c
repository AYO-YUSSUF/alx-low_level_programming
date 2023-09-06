#include "main.h"

/**
 * _strlen - find string length
 * @s: string
 * Return: int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *str_concat - concat 2 strings
 * @s1: string
 * @s2: string
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *x;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	x = malloc((sizeof(char) * (size1 + size2)) + 1);
	if (x == 0)
	{
		return (0);
	}
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			x[i] = s1[i];
		else
			x[i] = s2[i -  size1];
	}
	x[i] = '\0';
	return (x);
}


