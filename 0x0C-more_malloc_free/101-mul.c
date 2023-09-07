#include "main.h"
#include <stdlib.h>

/**
 * _puts - print string , followed by a new line
 * @str: pointer to the string to print
 * Return: void
*/

void _puts(char *str)
{
	int s = 0;

	while (str[s])
	{
		_putchar(str[s]);
		s++;
	}
}

/**
 * _atoi - convert strings to int
 * @s: string
 * Return: converted int
*/

int _atoi(const char *s)
{
	int sgn = 1;
	unsigned long int rep = 0, fnum, i;

	for (fnum = 0; !(s[fnum] >= 48 && s[fnum] <= 57); fnum++)
	{
		if (s[fnum] == '-')
		{
			sgn *= -1;
		}
	}

	for (i = fnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		rep *= 10;
		rep += (s[i] - 48);
	}

	return (sgn * rep);
}

/**
 * print_int - prints an integer
 * @n: int
 * Return: 0
*/

void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, rep;

	for (i = 0; n / div > 9; i++, div *= 10)
	;

	for (; div >= 1; n %= div, div /= 10)
	{
		rep = n / div;
		_putchar('0' + rep);
	}
}

/**
 * main - print multiplication result and new line
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
