#include "lists.h"

/**
 * list_len - calculates length
 * @h: pointer
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
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
