#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = head->next->next;

	while (hare != NULL && hare->next != NULL)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}

		tortoise = tortoise->next;
		hare = hare->next->next;
	}

	return (NULL);
}
