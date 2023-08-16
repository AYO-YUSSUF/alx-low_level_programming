#include "main.h"

/**
 * print_to_98 - print n to 98 counts seperated by comma, foolowed by space
 *               and number should print in order
 * @n: input
*/

void print_to_98(int n)
{
	int num;

	if (n > 98)
		for (num = n; num > 98; num--)
			printf("%d, ", num);
	else
		for (num = n; num > 98; num++)
			printf("%d. ", num);
	printf("98\n");
}
