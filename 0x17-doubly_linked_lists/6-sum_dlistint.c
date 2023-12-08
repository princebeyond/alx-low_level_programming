#include "lists.h"

/**
 * sum_dlistint - sum
 * @head: address
 *
 * Return: address
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
