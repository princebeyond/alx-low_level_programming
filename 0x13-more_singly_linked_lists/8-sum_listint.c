#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - add it up
 * @head: node
 *
 * Return: success
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;
	int data;

	while (current != NULL)
	{
		data = current->n;
		current = current->next;
		sum += data;
	}
	return (sum);
}
