#include "lists.h"

/**
 * free_listint - frees the list
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(tmp);
}
