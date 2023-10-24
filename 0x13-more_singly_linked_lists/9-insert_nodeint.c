#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - new node
 * @head: nod
 * @idx: just a index
 * @n: Mr data
 *
 * Return: beautiful success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current != NULL && count < idx)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (count == idx)
	{
		previous->next = new_node;
		new_node->next = current;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
