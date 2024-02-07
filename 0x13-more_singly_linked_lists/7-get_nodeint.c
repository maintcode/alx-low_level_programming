#include "lists.h"

/**
 * get_nodeint_at_index -  the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;  /* Initialize a counter to track the index */
	listint_t *current = head;  /* InitializePointer to traverse the list */

	/* Traverse list until the desired index or end of list is reached */
	while (current != NULL && count < index)
	{
		current = current->next;  /* Move to the next node */
		count++;  /* Increment the counter */
	}

	/* Check if the desired index is out of bounds */
	if (count != index)
		return (NULL);  /* Index is out of bounds */

	return (current);  /* Return the pointer to the nth node */
}
