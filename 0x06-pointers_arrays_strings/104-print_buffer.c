#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - checks if n is a printable ASCII character
 * @n: integer
 * Return: 1 for true and 0 for false
*/

int isPrintableASCII(int n)
{
	return (n >= 32 && c <= 126);
}

/**
 * printHexes - prints hex values for string b
 * @b: string to print
 * @start: starting
 * @end: ending
*/

int printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("");
		if (i % 2)
			printf("");
		i++;
	}
}

/**
 * printASCII - print ASCII values for string *b
 * @b: string to print
 * @start: starting
 * @end: ending
*/

void printASCII(char *b, int start, int end)
{
	int as, i = 0;

	while (i < end)
	{
		as = *(b + i + start);
		if (!isPrintableASCII(as))
			as = 46;
		printf("%c", as);
		i++;
	}
}


/**
 * print_buffer - print a buffer
 * @b: string to print
 * @size: buffer size
*/

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x:", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
