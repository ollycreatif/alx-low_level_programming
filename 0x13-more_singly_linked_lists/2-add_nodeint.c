#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: Pointer to the first node
 * @n: Integer element in node
 * Return: Address of new element, or NULL if function fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = *head;
	}
	else
		return (NULL);

	*head = newNode;
	return (newNode);
}
