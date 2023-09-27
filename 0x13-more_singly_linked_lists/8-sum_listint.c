#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of list.
 * @head: pointer to the first node
 *
 * Return: sums data
 */
int sum_listint(listint_t *head)
{
	int sums = 0;

	while (head != NULL)
	{
		sums += head->n;
		head = head->next;
	}
	return (sums);
}
