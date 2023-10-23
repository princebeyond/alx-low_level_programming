#include <stdio.h>
#include "lists.h"
/**
 * print_listint - abut to print list
 * @h: ptr
 *
 * Return: success
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		node_count++;
		current = current->next;
	}

	return (node_count);
}
