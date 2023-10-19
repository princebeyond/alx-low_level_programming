#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - freeing lists
 * @head:  HEAD
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *current = head;

		head = head->next;
		free(current->str);
		free(current);
	}
}
