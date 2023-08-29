#include "lists.h"
/**
 * pop_listint - Removes and returns the value stored in the head node.
 * @head: A pointer to a pointer to the head of the linked list.
 * Return: The value stored in the removed head node,0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = (*head);

	*head = (*head)->next;
	free(temp);

	return (data);
}
