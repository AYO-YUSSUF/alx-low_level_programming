#include <stdio.h>

/**
 * main - Entry point
 * Description: print the single digits
 * Return: Always 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num <= '9')
	{
		printf("%i", num);
		num++;
	}
	printf('\n');
	return (0);
}
