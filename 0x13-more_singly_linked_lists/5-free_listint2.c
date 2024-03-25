#include "lists.h"

/**
 * free_listint2 - Frees a linked list too
 * @head: Pointer tthe first node
 */

void free_listint2(listint_t **head)
{
	listint_t *pH;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		pH = *head;
		*head = (*head)->next;
		free(pH);
	}
}
