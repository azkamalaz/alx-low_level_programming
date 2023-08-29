#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to be stored in the new node.
 * Return: A pointer to the new head of the linked list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
