#include "main.h"

/**
 * times_table - prints the times table 1 - 9
 * Example
 * 0, 0, 0, 0,
 * 0, 1, 2, 3,
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 0; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/*
			 * add space if prod is a single digit
			 * put first digit if its two numbers
			*/
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /*get the 1st digit*/
			_putchar((prod % 10) + 48); /* gets the 2nd digit*/
		}
		_putchar('\n');
	}
}
