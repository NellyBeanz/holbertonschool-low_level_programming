#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list
 * @head: pointer
 * @str: string
 *
 * Return: address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *tmp;

	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = strlen(str);
	n->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = n;

	return (n);
}
