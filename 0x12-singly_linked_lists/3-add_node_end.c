#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds node
 * @head: head
 * @str: string
 *
 * Return: success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int len = 0;
	list_t *temp = *head;

	while (str[len])
		len++;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
