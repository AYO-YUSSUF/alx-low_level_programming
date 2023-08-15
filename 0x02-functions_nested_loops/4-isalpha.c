#include "main.h"

/**
 * _isalpha - function to check if character is lower/uppercase and a letter
 *
 *
 * @c: checks input from other functions.
 *
 * Return: returns 1 if `c` is correct or always 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
