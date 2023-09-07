#include "main.h"
#include <stdlib.h>

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
 * *argstostr - concat 2 strings
 * @ac: int
 * @av: args
 * Return: string
*/

char *argstostr(int ac, char **av)
{
	int i = 0, cn = 0, j = 0, tpm = 0;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, cn++)
		cn += _strlen(av[i]);

	x = malloc(sizeof(char) * cn + 1);
	if (x == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, tpm++)
			x[tpm] = av[i][j];
		x[tpm] = '\n';
		tpm++;
	}
	x[tpm] = '\0';
	return (x);
}
