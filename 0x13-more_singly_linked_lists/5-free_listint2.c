#include "lists.h"
/**
 * free_listint2 - Frees the memory occupied by a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
