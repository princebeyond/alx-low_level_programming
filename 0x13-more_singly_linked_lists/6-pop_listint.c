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
	listint_t *temp;

	if (!head || !*head)
		return (0);


	*head = current->next;
	temp = current->next;

	free(current);

	current = temp;
	return (data);
}
