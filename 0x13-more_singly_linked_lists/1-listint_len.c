#include "lists.h"

/**
 * listint_len - Computes the number of elements in a list
 * @h: Pointer to the first node
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
