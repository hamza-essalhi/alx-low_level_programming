#include "lists.h"
#include <stdio.h>

size_t get_list_len(const listint_t *head);
size_t print_list_safe(const listint_t *head);

/**
 * get_list_len - Counts the number of nodes in a linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t get_list_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 0;

	if (head == NULL)
		return (0);

	tortoise = head;
	hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			do {
				nodes++;
				hare = hare->next;
			} while (tortoise != hare);

			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (nodes);
		}
	}

	while (head)
	{
		nodes++;
		head = head->next;
	}

	return (nodes);
}

/**
 * print_list_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = get_list_len(head);

	for (i = 0; i < nodes; i++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	if (nodes > 0)
		printf("-> [%p] %d\n", (void *)head, head->n);

	return (nodes);
}

