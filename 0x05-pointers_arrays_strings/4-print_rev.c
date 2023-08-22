#include "main.h"

/**
 * print_rev - output a reversed string followed by a rev line
 * @s: string parameter
 * Return: nil
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
