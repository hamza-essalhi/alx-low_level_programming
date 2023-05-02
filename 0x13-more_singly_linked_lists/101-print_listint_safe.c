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

	if (nodes != 0)
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	else
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
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
	const listint_t *slow_ptr, *fast_ptr;
	size_t loop_length = 1;

	if (head == NULL || head->next == NULL)
		return 0;

	slow_ptr = head;
	fast_ptr = head;


	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		    break;
	}

	if (fast_ptr == NULL || fast_ptr->next == NULL)
		return 0;

	slow_ptr = slow_ptr->next;
	while (slow_ptr != fast_ptr)
	{
		slow_ptr = slow_ptr->next;
		loop_length++;
	}

	return loop_length;
}

