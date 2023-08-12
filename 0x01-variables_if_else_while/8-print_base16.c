#include <stdio.h>

/**
 * main - Entry point
 * Description: print in lowercase numbers of base16
 * Return: Always 0 (success)
*/

int main(void)
{
	int numh = 48; /*48; decimal rep is 0*/

	while (numh <= 102) /*102; decimal rep of f*/
	{
		putchar(numh);

		/* after 7 we jump till 94; `*/
		if (numh == 53)
			numh += 37;
		numh++;
	}
	putchar('\n');
	return (0);
}
