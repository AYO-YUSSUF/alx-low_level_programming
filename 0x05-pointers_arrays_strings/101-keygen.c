#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random password for 101-crackme
 * Return: zero
*/

int main(void)
{
	int digit;
	char q;

	srand(time(NULL));
	while (digit <= 2645)
	{
		q = rand() % 120;
		digit += q;
		putchar(q);
	}
	putchar(2772 - digit);
	return (0);
}
