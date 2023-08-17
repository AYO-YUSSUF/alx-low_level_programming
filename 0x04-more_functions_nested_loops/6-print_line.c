#include "main.h"

/**
 * print_line - print a  line
 * @n: input is the number of times `_` will be printed
*/

void print_line(int n)
{
	int lnchar;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnchar = 1; lnchar <= n; lnchar++)
			_putchar('_');
		_putchar('\n');
	}
}
