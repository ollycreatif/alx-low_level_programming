#include "lists.h"

/**
 * free_list - Frees a list
 * @head: pointer to the first element
 */

void free_list(list_t *head)
{
	list_t *placeholder;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		placeholder = head->next;
		free(head->str);
		free(head);
		head = placeholder;
	}
	free(head->str);
	free(head);
}
