#include "lists.h"

/**
 * list_len - Computes the number of elements in a linked list
 * @h: Pointer to the first element
 * Return: Number of elements in list
 */

size_t list_len(const list_t *h)
{
	int c;

	if (h == NULL)
		return (0);

	c = 1;
	while (h->next != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
