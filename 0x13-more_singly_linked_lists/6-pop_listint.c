#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head node.
 *
 * Return: The head node's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)  /* Check if the linked list is empty */
		return (0);

	temp = *head;       /* Save the reference to the head node */
	data = temp->n;     /* Retrieve the data from the head node */
	*head = temp->next; /* Update the head to the next node */
	free(temp);         /* Free the original head node */

	return (data);
}
