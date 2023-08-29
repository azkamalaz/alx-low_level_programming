#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a specified index.
 * @head: A pointer to a pointer to the head of the linked list.
 * @idx: The index at which the new node should be inserted (0-based index).
 * @n: The integer value to be stored in the new node.
 * Return: A pointer to the newly inserted node, NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *ptr2 = malloc(sizeof(listint_t));

	ptr2->n = n;
	ptr2->next = NULL;

	if (head != NULL)
	{
		while (idx != 1)
		{
			ptr = ptr->next;
			idx--;
		}
		ptr2->next = ptr->next;
		ptr->next = ptr2;

		return (ptr2);
	}

	else
		return (NULL);
}
