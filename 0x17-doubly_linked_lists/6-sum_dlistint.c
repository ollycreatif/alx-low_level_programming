#include "lists.h"
/**
 * sum_dlistint - computes the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: pointer to the first node
 * Return: sum of data in list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
