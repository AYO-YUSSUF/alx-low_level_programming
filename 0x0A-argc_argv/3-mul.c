#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs multiplication
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int a, s;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	s = atoi(argv[2]);
	printf("%d\n", a * s);

	return (0);
}
