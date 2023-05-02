#include "lists.h"
#include <stdio.h>

/* Code By Hamza Rssalhi */

size_t get_listint_len(const listint_t *head);



/**
 * print_listint_safe - Prints a listint_t .
 * @head: A pointer .
 *
 * Return: nodest.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = get_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}




/**
 * get_listint_len - finds the length of a loop in a linked list
 *
 * @head: a pointer to the head of the linked list
 *
 * Return: the length of the loop, or 0 if there is no loop
 */


size_t get_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = head->next->next;

	while (fast && fast->next)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}

			return (nodes);
		}

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}

