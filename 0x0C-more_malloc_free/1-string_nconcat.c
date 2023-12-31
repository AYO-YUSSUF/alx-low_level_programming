#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - returns two concat strings
 * @s1: string
 * @s2: string
 * @n: int
 * Return: pointer to space
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int i, j, s1_len, s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	st = malloc(s1_len + n + 1);
	if (st == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		st[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		st[i] = s2[j];
		i++;
	}

	st[i] = '\0';
	return (st);
}
