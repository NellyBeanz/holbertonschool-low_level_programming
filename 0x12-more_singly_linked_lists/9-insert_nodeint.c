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

	new->n = n;
	new->next = NULL;

	tmp = *head;
	if (idx == 0)
	{
		new->next = tmp;
		tmp = new;
		return (new);
	}

	i = 0;
	while (*head != NULL)
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
