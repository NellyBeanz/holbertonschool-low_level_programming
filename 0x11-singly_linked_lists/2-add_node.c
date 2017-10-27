#include "lists.h"

/**
 * add_node - adds new node at the beginning of list
 * @head: pointer
 * @str: string
 *
 * Return: address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n; /* new node */

	if (head == NULL)
		return (NULL);

	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);

	if (*head != NULL)
		n->next = *head;
	else
		n->next = NULL;

	n->str = strdup(str);
	n->len = strlen(str);
	*head = n;

	return (*head);
}
