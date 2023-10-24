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
	int data = (*head)->n;
	listint_t *temp;

	if (!head || !*head)
		return (0);


	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
