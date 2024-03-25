#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of a list
 * @head: Pointer to the pointer to head
 * @str: String in question
 * Return: Added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	newNode->str = strdup(str);

	int c = 1;

	newNode = *head;
	while (newNode != NULL)
	{
		newNode = newNode->next;
		c++;
	}

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
