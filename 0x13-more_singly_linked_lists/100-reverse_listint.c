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
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}

