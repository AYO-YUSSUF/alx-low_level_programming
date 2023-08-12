#include <stdio.h>

/**
 * main - Entry point
 * Description: print the Alphabets A- Z in reverse
 * Return: Always 0 (success)
*/

int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
