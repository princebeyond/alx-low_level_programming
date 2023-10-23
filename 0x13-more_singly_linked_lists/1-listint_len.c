#include <stdio.h>
#include "lists.h"
/**
 * listint_len - list len
 * @h: node
 *
 * Return: success
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
