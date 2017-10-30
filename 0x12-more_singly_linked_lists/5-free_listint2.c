#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	if (*head == NULL)
		return;

	while ((*head)!= NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(tmp);
	*head = NULL;
}
