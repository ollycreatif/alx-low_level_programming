#include "lists.h"

/**
 * sum_listint - Computes the sum of all data (n) in list
 * @head: Pointer to the first node
 * Return: Sum of all data(n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
