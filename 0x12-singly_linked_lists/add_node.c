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


	newNode->next = *head;

	if (*head == NULL)
	{
		newNode->next = NULL;
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = str_len(str);
	*head = newNode;

	return (*head);
}

/**
 * str_len - Computes the length of a given string
 * @str: String in question
 * Return: Length of the string
 */
size_t str_len(const char *str)
{
	int c = 1;

	if (str == NULL)
		return (0);

	while (*str != '\0')
		c++;
	return (c);
}
