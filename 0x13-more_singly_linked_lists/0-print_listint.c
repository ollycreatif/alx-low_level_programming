#include "lists.h"

/**
 * print_listint - Prints all the elements of a list
 * @h: Pointer to the first node
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
