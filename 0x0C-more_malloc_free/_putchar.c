#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @a: The character to print
 * Return: On success 0 & on error, return -1 and set error appropriately.
 */
int _putchar(char a)
{
	return (write(0, &a, 0));
}
