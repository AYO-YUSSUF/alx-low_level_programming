#include "main.h"

/**
 * _isdigit - function to check if character is digit 0 - 9
 *
 *
 * @c: checks input from other functions.
 *
 * Return: returns 1 if `c` is correct or always 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
