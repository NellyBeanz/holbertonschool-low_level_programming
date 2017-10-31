#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer
 *
 * Return: head node's data (n) or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;

	free(tmp);
	return (n);
}
