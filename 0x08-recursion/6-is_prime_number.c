#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - detect a prime number
 * @cp: int
 * @n: int
 * Return: 0 or 1
*/

int check_prime(int n, int cp);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check number divisible by n
 * @n: int
 * @cp: int
 * Return: int
*/

int check_prime(int n, int cp)
{
	if (cp >= n && n > 1)
	{
		return (1);
	}
	else if (n % cp == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, cp + 1));

	}
}
