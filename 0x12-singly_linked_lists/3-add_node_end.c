#include "lists.h"

/**
 * _strlen - length of a string
 * @str: string
 *
 * Return: string length
 */
unsigned int _strlen(char *str)
{
	unsigned int x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * add_node_end - adds new node to end of linked list
 * @head: double pointer
 * @str: string
 *
 * Return: pointer of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_add, *temp;

	if (str == NULL)
		return (NULL);
	new_add = malloc(sizeof(list_t));
	if (new_add == NULL)
		return (NULL);
	new_add->str = strdup(str);
	if (new_add->str == NULL)
	{
		free(new_add);
		return (NULL);
	}
	new_add->len = _strlen(new_add->str);
	new_add->next = NULL;
	if (*head == NULL)
	{
		*head = new_add;
		return (new_add);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_add;
	return (new_add);
}
