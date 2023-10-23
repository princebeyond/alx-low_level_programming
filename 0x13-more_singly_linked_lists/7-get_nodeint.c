#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get node
 * @head: begi
 * @index: needed
 *
 * Return: success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (current_index == index)
			return (current);

		current = current->next;
		current_index++;
	}
	return (NULL);
}
