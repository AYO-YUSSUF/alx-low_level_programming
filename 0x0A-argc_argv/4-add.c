#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs addition
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int a, s, add = 0;
	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; argv[a]; a++)
	{
		s = strtol(argv[a], &ptr, 100);
		if (*ptr)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += s;
		}
	}
	printf("%d\n", add);

	return (0);
}
