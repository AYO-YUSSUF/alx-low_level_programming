#include "main.h"

/**
 * _strcat - concatenate string and integter
 * @dest: destination pointer input
 * @src: source pointer input
 * @n: most number of byte from src
 * Return: string @dest
*/

char *_strcat(char *dest, char *src, int n)
{
	int a, i;

	a = 0;
	/*find the dest array*/
	while (dest[a])
		a++;
	/* src wont be null terminated if it contain n or more bytes*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[a + i] = src[i];
	/* null terminate dest*/
	return (dest);
}
