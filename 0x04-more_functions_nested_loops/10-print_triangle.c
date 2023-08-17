#include "main.h"

/**
 * print_triangle - print a  triangle
 * @size: input is the triangle size
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int hgt, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hgt = 1; hgt <= size; hgt++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((hgt + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
