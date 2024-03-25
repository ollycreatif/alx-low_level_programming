#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of a list
 * @head: Pointer to the pointer of head
 * @str: String in question
 * Return: Added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	newNode->str = strdup(str);

	if (*head == NULL)
	{
		newNode->next = NULL;
		return (NULL);
	}
	else
		newNode->next = *head;

	*head = newNode;

	return (*head);
}
