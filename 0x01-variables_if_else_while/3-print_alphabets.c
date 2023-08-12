#include <stdio.h>

/**
 * main - Entry point
 * Description: print the Alphabets in lowercase then in uppercase
 * Return: Always 0 (success)
*/

int main(void)
{
	char alph = 'a';
	char ALPH = 'A';

	/*prints lowercase a-z*/
	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	/*prints Uppercase a-z*/
	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		ALPH++;
	}
	putchar('\n');
	return (0);
}
