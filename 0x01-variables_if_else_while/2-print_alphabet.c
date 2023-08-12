#include <stdio.h>

/**
 * main - Entry point
 * Description: print the Alphabets A-Z
 * Return: Always 0 (success)
*/

int main(void)
{
	char alph = 'a';

	while (alph += 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
