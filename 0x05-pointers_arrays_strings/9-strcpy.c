#include "main.h"

/**
 * *_strcpy - output the copied string pointed by pointed 'src'
 * @dest: string parameter
 * @src: string parameter
 * Description: copies the string pointed to by pointer 'src' to buffer 'dest'
 * Return: 'dest' pointer
*/

void *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0')

	return (dest);
}
