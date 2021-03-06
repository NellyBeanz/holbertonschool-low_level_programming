#include "lists.h"

/**
 * listint_len - calculates the length
 * @h: pointer
 *
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
