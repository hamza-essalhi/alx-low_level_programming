#include "lists.h"


/* code by Hmza Essalhi */

/**
 * free_listint - Frees a linked list.
 *
 * @head: Pointer to the first element of the list.
 **/

void free_listint(listint_t *head)
{
	listint_t *buffer;

	while (head)
	{
		buffer = head->next;
		free(head);
		head = buffer;
	}
}
