#include "lists.h"
/**
 * get_nodeint_at_index - Retrieves a node at a specified index.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to retrieve (0-based index).
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head != NULL)
	{
		while (index != 0)
		{
			head = head->next;
			index--;
		}
		return (head);
	}

	else
		return (NULL);
}
