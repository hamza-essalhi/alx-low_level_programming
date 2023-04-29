
#include "lists.h"

/*Code by Hamza essalhi*/

/**
 * get_nodeint_at_index - Returns the node at a given
 *	position in a linked list.
 *
 * @head: Pointer to the first element of the list.
 * @index: Index of the node to return (starting from 0).
 *
 * Return: Pointer to the node at the given index, or NULL.
 **/

listint_t *get_nodeint_at_index(listint_t *head,
	unsigned int index)
{
	listint_t *buffer = head;
	unsigned int i = 0;

	while (buffer && i < index)
	{
		buffer = buffer->next;
		i++;
	}
	if (buffer)
		return (buffer);
	else
		return (NULL);
}
