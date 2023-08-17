#include "main.h"

/**
 * main - print numbers 1 - 100 followed by a new line
 *        multiple of 3 numbers prints Fizz
 *        multiple of 5 numbers prints Buzz
 *        multiple of 3 and 5 numbers prints FizzBuzz
 *        each number and world to be separated by space
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 5 == 0 && num % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			print(" ");
		else
			printf("\n");
	}

	return (0);
}
