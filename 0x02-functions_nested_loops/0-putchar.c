#include "main.h"

/**
 * main - Entry point
 * Description: prints _putchar using putchar prototype
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ah;

	for (ah = 0; ah < 8; ah++)
		_putchar(str[ah]);
	_putchar('\n');

	return (0);
