#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: index where new node should be added
 * @n: number
 *
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}

	i = 1;
	tmp = *head;
	while (tmp != NULL)
	{
		if (i != idx)
		{
			tmp = tmp->next;
			i++;
		}
		else
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
	}
	return (NULL);
}
