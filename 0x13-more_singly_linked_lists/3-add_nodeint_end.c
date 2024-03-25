#include "lists.h"

/**
 * add_nodeint_end - Adds new node at the end of a list
 * @head: Pointer to the first node
 * @n: Integer parameter in a node
 * Return: Newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
	}
	else
		return (NULL);

	if (*head != NULL)
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;
		(*head)->next = newNode;
	}
	else
		*head = newNode;

	return (newNode);
}
