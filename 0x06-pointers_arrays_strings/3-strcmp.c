#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 for true and 0 for false
*/

int _strcmp(char *s1, char *s2)
{
	int rslt = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			rslt = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;

		}
		s1++;
		s2++;
	}
	return (rslt);
}
