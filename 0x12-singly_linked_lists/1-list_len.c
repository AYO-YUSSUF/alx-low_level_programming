#include "lists.h"

/**
 * list_len - check the students code.
 * @h: list name
 * Return: number of nodes.
 */
size_t list_len(const list_t *h)
{
	int x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
