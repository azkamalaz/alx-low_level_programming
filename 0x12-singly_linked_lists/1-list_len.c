#include "lists.h"
/**
 * list_len - length of linked list
 * @h: head.
 * Return: length.
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
