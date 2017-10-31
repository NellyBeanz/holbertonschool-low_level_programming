#include "lists.h"

/**
 * sum_listint - calculates sum of all data (n)
 * @head: pointer
 *
 * Return: sum or 0 if empty
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;

	sum = 0;
	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
