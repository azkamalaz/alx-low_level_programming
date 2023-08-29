#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to be stored in the new node.
 * Return: A pointer to the new node added at the end of the linked list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = tmp;

	return (tmp);
}
