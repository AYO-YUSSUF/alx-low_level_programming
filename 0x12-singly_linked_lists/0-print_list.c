#include "lists.h"


/**
 * print_list - check the students code.
 * @h: list name
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int x = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		x++;
		h = h->next;
	}
	return (x);
}
