#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at a specified index
 * of a dlistint_t linked list
 * @head: pointer to the first node
 * @index: position to delete at
 * Return: rest of the list
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h0;
	dlistint_t *h1;
	unsigned int i = 0;

	h0 = *head;

	if (h0 != NULL)
		while (h0->prev != NULL)
			h0 = h0->prev;

	while (h0 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h0->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h1->next = h0->next;

				if (h0->next != NULL)
					h0->next->prev = h1;
			}

			free(h0);
			return (1);
		}
		h1 = h0;
		h0 = h0->next;
		i++;
	}

	return (-1);
}
