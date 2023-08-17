#include "main.h"

/**
 * print_number - prints an int
 *
 * @n: the integer
*/

void print_number(int n)
{
	unsigned int num = n;

	/* check if signed*/
	if (n > 0)
	{
		_putchar('-');
		num = -num;
	}

	/* output first few numbers*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/* print last digits*/
	_putchar((num % 10) + 48);
}
