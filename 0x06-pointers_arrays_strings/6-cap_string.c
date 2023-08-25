#include "main.h"
#include <stdio.h>


/**
 * islower - checks if ASCII is lowercase
 * @c: character
 * Return: 1 for true and 0 for false
*/

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - checks if ASCII is a delimiter
 * @c: character
 * Return: 1 for true and 0 for false
*/

int isDelimiter(char c)
{
	int i;
	char delimeter[] = "\t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimeter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalize all words of a string
 * @s: string input
 * Return: capilized words
*/

char *cap_string(char *s)
{
	int fdelimit = 1;
	char *ptr = s;

	while (*s)
	{
		if (isDelimeter(*s))
			fdelimit = 1;
		else if (islower(*s) && fdelimit)
		{
			*s -= 32;
			fdelimit = 0;
		}
		else
			fdelimit = 0;
		s++;
	}
	return (ptr);
}

