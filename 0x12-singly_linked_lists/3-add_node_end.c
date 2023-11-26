#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	if (head == NULL || str == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string using strdup */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL; /* The new node will be the last node */

	/* If the list is empty, set the head to the new node */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node */
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;

		/* Update the next pointer of the last node */
		last_node->next = new_node;
	}

	return (new_node);
}
