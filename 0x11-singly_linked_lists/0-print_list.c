#include "lists.h"

/**
 * print_list - prints all the elements of list
 * @h: pointer
 * Return: length
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			i += printf("[0] (nil)\n");
		else
			i += printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
