#include "main.h"

/**
 * _puts - output a string followed by a new line
 * @str: string parameter
 * Return: nil
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
