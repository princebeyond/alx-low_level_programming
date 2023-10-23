#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free
 * @head: no
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
