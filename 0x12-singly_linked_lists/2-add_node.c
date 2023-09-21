#include "lists.h"

/**
 * _strlen - length of a string.
 * @s : character
 * Return: value
 */
int _strlen(const char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * add_node - adds new node at beginning of list_t.
 * @head: head.
 * @str: value.
 * Return: number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_add;

	new_add = malloc(sizeof(list_t));
	if (new_add == NULL)
		return (NULL);
	new_add->str = strdup(str);

	new_add->len = _strlen(str);
	new_add->next = *head;
	*head = new_add;

	return (new_add);
}
