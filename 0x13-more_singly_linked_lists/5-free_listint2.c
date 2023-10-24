#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free
 * @head: no
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
