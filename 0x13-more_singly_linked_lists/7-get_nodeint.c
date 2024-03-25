#include "lists.h"

/**
 * get_nodeint_at_index - Adds new node to nth position of a list
 * @head: Pointer to the first node
 * @index: nth index/position
 * Return: Newly added node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t c = 0;

	while (c < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		c++;
	}
	return (head);
}
