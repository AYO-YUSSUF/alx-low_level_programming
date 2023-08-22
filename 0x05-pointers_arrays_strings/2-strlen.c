#include "main.h"

/**
 * _strlen - output the length of a string
 * @s: string parameter
 * Return: string length
*/

int _strlen(char *s)
{
	int cntr;

	for (cntr = 0; *s != '\0'; s++)
		++cntr;
	return (cntr);
}
