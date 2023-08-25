#include "main.h"

/**
 * _strcat - concatenate string
 * @dest: destination pointer input
 * @src: source pointer input
 * Return: string @dest
*/

char *_strcat(char *dest, char *src)
{
	int a, a2;

	a = 0;
	/*find the dest array*/
	while (dest[a])
		a++;
	/* iterate through each src array value without null byte*/
	for (a2 = 0; src[a2] ; a2++)
		/*append src[a2] to dest[a] while overwrittingt the null byte in dest*/
		dest[a++] = src[a2];

	return (dest);
}

