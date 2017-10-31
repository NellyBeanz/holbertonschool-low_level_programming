#include "lists.h"

/**
 * get_nodeint_at_index - function that gets nth node of list
 * @head: pointer
 * @index: takes in an index
 *
 * Return: nth node of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i != index)
		{
			head = head->next;
			i++;
		}
		else
			return (head);
	}
	return (head);
}
