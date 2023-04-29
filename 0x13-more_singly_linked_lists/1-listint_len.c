#include "lists.h"

/**
 * listint_len - Returns the number of
 *	elements in a linked list of integers
 * @h: Pointer to the head node of the linked list
 *
 * Return: The number of nodes in the linked list
 */

/*Code by Hamza Essalhi*/

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
