#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node
 * @head: a double pointer
 *
 *Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *begin;
	int x;

	if (head == NULL || *head == NULL)
		return (0);
	begin = *head;
	*head = begin->next;
	x = begin->x;
	free(begin);
	return (x);
}
