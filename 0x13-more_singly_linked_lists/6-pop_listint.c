#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - list
 * @head: node
 * Return: success
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int data = current->n;

	if (head == NULL || *head == NULL)
		return (0);


	*head = current->next;

	free(current);
	return (data);
}
