#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverse list
 * @head: node
 *
 * Return: success
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;
	listint_t *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;

		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}

