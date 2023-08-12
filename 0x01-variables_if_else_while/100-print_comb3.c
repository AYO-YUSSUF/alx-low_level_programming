#include <stdio.h>

/**
 * main - Entry point
 * Description: print - 9, 0, 1
 * Return: Always 0 (success)
*/

int main(void)
{
	int num1 = 0, num2;

	while (num <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num + 48);
				putchar(num + 48);
				if (num1 + num2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	printf("\n");
	return (0);
}
