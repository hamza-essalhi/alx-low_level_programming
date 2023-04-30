#include "lists.h"
#include <stdio.h>

size_t get_list_len(const listint_t *head);
size_t print_list_safe(const listint_t *head);

/**
 * get_list_len - Counts the number of nodes.
 * @head: A pointer.
 *
 * Return: The number of nodes.
 */
size_t get_list_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t nodes = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		h = head;
		t = head;
		
		while (h && hare->next)
		{
			t = t->next;
			h = h->next->next;

			if (t == h)
			{
				while (t!= h)
				{
					nodes++;
					h = h->next;
				}

				t = h;
				while (t != h)
				{
					nodes++;
					t = t->next;
					h= h->next;
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
}

/**
 * print_list_safe - Prints a listint_t.
 * @head: A pointer.
 *
 * Return: The number of nodes.
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

