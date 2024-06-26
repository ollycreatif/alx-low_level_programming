#include "lists.h"
/**
 * add_dnodeint_end -  adds a newNode node at the end of a dlistint_t list
 * @head: pointer to the first node
 * @n: number of elements in node
 * Return: newly added node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = newNode;
	}
	else
	{
		*head = newNode;
	}

	newNode->prev = h;
	return (newNode);
}
