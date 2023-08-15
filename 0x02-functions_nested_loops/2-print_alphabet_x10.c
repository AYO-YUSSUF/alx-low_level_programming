#include "main.h"

/**
 * print_alphabet_x10 - uses the _putchar function to print a - z 10 times.
*/

void print_alphabet_x10(void)
{
	int multi, ah;

	for (multi = 0; multi <= 9; multi++)
	{
		for (ah = 'a'; ah <= 'z'; ah++)
			_putchar(ah);
		_putchar('\n');
	}
}
