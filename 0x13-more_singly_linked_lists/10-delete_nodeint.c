#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at a specified index.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to be deleted (0-based index).
 * Return: 1 on success, -1 if node doesn't exist or if head is NULL.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head, *prev = *head;

	if (*head == NULL)
		return (-1);

	else if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
	}

	else
	{
		while (index != 0)
		{
			prev = curr;
			curr = curr->next;
			index--;
		}

		prev->next = curr->next;
		free(curr);
		curr = NULL;
	}

	return (1);
}
