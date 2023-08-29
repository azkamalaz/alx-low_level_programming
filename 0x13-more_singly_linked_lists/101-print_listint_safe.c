#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *checker = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		current = current->next;

		while (checker < current && checker != NULL)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}

		if (checker != NULL)
			checker = checker->next;
	}

	return (count);
}
