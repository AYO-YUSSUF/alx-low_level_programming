#include "main.h"

/**
 * print_alphabet - uses the _putchar function to print a - z.
*/

void print_alphabet(void)
{
	int ah;

	for (ah = 'a'; ah <= 'z'; ah++)
		_putchar(ah);
	_putchar('\n');
}
