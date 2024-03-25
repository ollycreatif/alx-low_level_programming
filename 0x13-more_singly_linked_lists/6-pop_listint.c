#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * @head: Pointer to the first node
 * Return: Head node's n
 */

int pop_listint(listint_t **head)
{
	listint_t *dtr;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	dtr = *head;
	*head = (*head)->next;
	free(dtr);

	return (n);
}
