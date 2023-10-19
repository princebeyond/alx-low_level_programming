#include <stdio.h>
#include "lists.h"
/**
 * print_list - abut to print list
 * @h: ptr
 *
 * Return: success
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		node_count++;
		current = current->next;
	}

	return (node_count);
}
