#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - freeing lists
 * @head:  HEAD
 */
void free_listint(listint_t *head)
{
		listint_t *current = head;
		listint_t *temp;

		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp);
		}

}
