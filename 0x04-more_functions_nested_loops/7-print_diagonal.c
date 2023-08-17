#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: input is the number of times `\` will be printed
*/

void print_diagonal(int n)
{
	int diag, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (diag = 1; diag <= n; diag++)
		{
			for (space = 1; space <= diag; space++)
				_putchar(' ');
			_putchar(92); /* equal to `/` in ASCII*/
			_putchar('\n');
		}
	}
}
