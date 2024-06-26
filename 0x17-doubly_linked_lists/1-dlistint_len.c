#include "lists.h"
/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list
 * @h: pointer to the first node
 * Return: length of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	if (h == NULL)
		return (c);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
