#include "lists.h"
/**
 * sum_listint - Calculates the sum of integer values in a linked list.
 * @head: A pointer to the head of the linked list.
 * Return: The sum of the integer values in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		if (head == NULL)
		{
			return (0);
		}

		else
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
