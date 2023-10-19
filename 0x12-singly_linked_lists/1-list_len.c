#include <stdio.h>
#include "lists.h"
/**
 * list_len - length
 * @h: ptr
 * Return: success
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		node_count++;
		current = current->next;
	}
	return (node_count);
}
