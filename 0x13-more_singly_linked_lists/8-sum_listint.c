#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Sum of all data (n) or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	/* Traverse the linked list and add the value of n to sum */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
