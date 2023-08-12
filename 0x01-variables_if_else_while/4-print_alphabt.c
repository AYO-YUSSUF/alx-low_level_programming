#include <stdio.h>

/**
 * main - Entry point
 * Description: print the Alphabets A-Z except Q and E
 * Return: Always 0 (success)
*/

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alpha == 'q' || alph == 'e')
			alph++;
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
