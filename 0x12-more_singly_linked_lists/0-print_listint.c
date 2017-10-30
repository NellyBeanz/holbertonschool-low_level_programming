#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	i = 0;
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%u\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
