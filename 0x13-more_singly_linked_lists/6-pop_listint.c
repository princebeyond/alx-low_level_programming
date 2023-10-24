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
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
