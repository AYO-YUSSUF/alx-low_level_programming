#include "lists.h"

/**
 * free_list - Realease the memory allocate
 *
 * @head: first node of list to free pointer
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
