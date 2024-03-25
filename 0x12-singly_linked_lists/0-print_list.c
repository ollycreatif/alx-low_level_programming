#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the first node
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int c; /*keeps count of how many times we moved to next*/

	if (h->next == NULL)
		return (0);

	c = 1;
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		c++;
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (c);
}
