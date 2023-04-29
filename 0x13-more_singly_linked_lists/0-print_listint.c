#include "lists.h"

/**
 * print_listint - Prints all the elements of a
 * linked list of integers.
 * @h: A pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);


}


