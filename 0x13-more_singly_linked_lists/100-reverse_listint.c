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
	listint_t *new_head;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	new_head = reverse_listint(&((*head)->next));

	(*head)->next->next = *head;
	(*head)->next = NULL;

	*head = new_head;

	return (*head);
}

