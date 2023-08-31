#include "main.h"

/**
 * _print_rev_recursion - string reversed
 * @s: string pointer
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
