#include <stdio.h>

/**
 * _sqrt - finds square root
 *
 * @m: input number
 *
 * Return: square root of m
*/

double _sqrt(double m)
{
	float sqrt, tp;

	sqrt = m / 2;
	tp = 0;

	while (sqrt != tp)
	{
		tp = sqrt;
		sqrt = (m / tp + tp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest
 *                        prime factor of num
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int pnum, largest;

	while (num % 2 == 0)/* divide with the smallest prime '2' */
		num = num / 2;

	/* num must be odd so we proceed to next prime number (plum two) */
	for (pnum = 3; pnum <= _sqrt(num); pnum += 2)
	{
		while (num % pnum == 0)
		{
			num = num / pnum;
			largest = pnum;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}

