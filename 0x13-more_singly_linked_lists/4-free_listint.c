#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: Pointer to the first node in the list
 */

void free_listint(listint_t *head)
{
	listint_t *pH; /*Place holder*/

	while (head != NULL)
	{
		pH = head;
		head = head->next;
		free(pH);
	}
}
