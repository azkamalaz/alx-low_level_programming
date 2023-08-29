#include "lists.h"
/**
 * reverse_listint - Reverses a singly linked list of integers.
 * @head: A pointer to a pointer to the head of the linked list.
 * Return: A pointer to the new head of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = next;
	}
	*head = prv;

	return (*head);
}
