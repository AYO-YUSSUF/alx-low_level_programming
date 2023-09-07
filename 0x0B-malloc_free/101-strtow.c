#include "main.h"
#include <stdlib.h>

/**
 * wrdcnt - word count
 * @s: string
 * Return: int
*/

int wrdcnt(char *s)
{
	int x = 0, i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				x++;
		}
		else if (i == 0)
			x++;
	}
	x++;
	return (x);
}

/**
 * strtow - splits a string into words
 * @str: args
 * Return: array of string
*/
char **strtow(char *str)
{
	int i, j, k, l, cn = 0, cw = 0;
	char **x;

	if (*str == '\0' || str == NULL)
		return (NULL);
	cn = wrdcnt(str);
	if (cn == 1)
		return (NULL);
	x = (char **)malloc(cn * sizeof(char *));
	if (x == NULL)
	{
		return (NULL);
	}
	x[cn - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			x[cw] = (char **)malloc(j * sizeof(char *));
			j--;
			if (x[cw] == NULL)
			{
				for (k = 0; k < cw; k++)
					free(x[k]);
				free(x[cn - 1]);
				free(x);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				x[cw][l] = str[i + l];
			x[cw][l] = '\0';
			cw++;
			i += j;
		}
		else
			i++; }
	return (x); }
