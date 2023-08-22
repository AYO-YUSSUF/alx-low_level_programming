#include "main.h"

/**
 * rev_string - output a reversed string
 * @s: string parameter
 * Return: nil
*/

void rev_string(char *s)
{
	int q, i;
	char temp;

	for (q = 0; s[q] != '\0'; ++q)
		;

	for (i = 0; i < q / 2; ++i)
	{
		temp = s[i];
		s[i] = s[q - 1 - i];
		s[q - 1 - i] = temp;
	}
}
