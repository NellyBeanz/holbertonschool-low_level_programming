#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a list
 * @head: pointer
 * @index: index of node that should be deleted
 *
 * Return: 1 if success or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *tmp;
	unsigned int i;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}

	i = 1;
	while (i < index)
	{
		if (tmp->next == NULL)
		{
			return (-1);
		}
		else
		{
			tmp = tmp->next;
			i++;
		}
	}
	node = tmp->next;
	tmp->next = node->next;
	free(node);

	return (1);
}
