#include <stdio.h>

/**
 * main - Entry point
 * Description: print in lowercase numbers of base16
 * Return: Always 0 (success)
*/

int main(void)
{
	int numh = 46; /*46; decimal rep is .*/

	while (numh <= 104) /*104; decimal rep of h*/
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
