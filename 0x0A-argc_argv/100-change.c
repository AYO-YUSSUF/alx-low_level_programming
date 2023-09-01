#include <stdio.h>
#include <stdlib.h>

/**
 * main - program coin swap
 * @argc: int
 * @argv: list
 * Return: 0 success or fail if not
*/
int main(int argc, char const *argv[])
{
	if (argc == 2)
	{
		int x, smallcents = 0, cash = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (x = 0; x < 5; x++)
		{
			if (cash >= cents[x])
			{
				smallcents += cash / cents[x];
				cash = cash % cents[x];
				if (cash % cents[x] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", smallcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
