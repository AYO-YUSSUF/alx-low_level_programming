#include <stdio.h>

/**
 * main - Entry point
 * Description: printing 0-9 using putchar
 * Return: Always 0 (success)
*/

int main(void)
{
	int numc = 0;

	while (numc <= 9)
	{
		/*number to ASCII convertion*/
		putchar(numc + '0');
		numc++;
	}
	putchar('\n');
	return (0);
}
