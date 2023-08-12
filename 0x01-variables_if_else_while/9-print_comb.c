#include <stdio.h>

/**
 * main - Entry point
 * Description: print - 9, 0, 1
 * Return: Always 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	printf("\n");
	return (0);
}
