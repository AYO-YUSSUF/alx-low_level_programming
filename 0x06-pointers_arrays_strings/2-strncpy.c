#include "main.h"

/**
 * _strncpy - concatenate string and integter
 * @dest: destination pointer input
 * @src: source pointer input
 * @n:  byte from src
 * Return: string @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate through src array whereby there isnt null byte
	 * among the first n bytes of source, the string placed in
	 * dest will not be null terminated
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the length of source is less than n
	 * write additional nullbytes to dest and
	 * enumerate that a total of n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

