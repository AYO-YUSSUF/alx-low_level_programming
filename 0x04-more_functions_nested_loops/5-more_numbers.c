#include "main.h"

/**
 * more_numbers - uses the _putchar function thrice to print 0 - 14 (10 times).
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int numb, row, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			numb = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				numb = count % 10;
			}
			_putchar(numb + 48);
		}
		_putchar('\n');
	}
}
