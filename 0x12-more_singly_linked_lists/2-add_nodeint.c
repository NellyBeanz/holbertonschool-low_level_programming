#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of list
 * @head: pointer
 * @n: number
 *
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head != NULL)
		new->next = *head;
	else
		new->next =  NULL;

	new->n = n;
	*head = new;

	return (*head);
}
