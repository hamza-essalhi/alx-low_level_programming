#include "lists.h"
#include <stdio.h>

size_t length(const listint_t *head);
size_t print_listint_safe(const listint_t *head);


/**
 * length - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t length(const listint_t *head)
{
	const listint_t *tort, *hre;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tort = head->next;
	hre = (head->next)->next;

	while (hre)
	{
		if (tort == hre)
		{
			tort = head;
			while (tort != hre)
			{
				node++;
				tort = tort->next;
				hre = hre->next;
			}

			tort = tort->next;
			while (tort != hre)
			{
				node++;
				tort = tort->next;
			}

			return (node);
		}

		tort = tort->next;
		hre = (hre->next)->next;
	}

	return (0);
}


/**
 * print_listint_safe - prints a linked list, even with a loop
 * @head: pointer to the first node of the linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, i = 0;

	n = length(head);

	if (node != 0)
	{
		for (i = 0; i < node; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	else
	{

		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	return (node);
}
