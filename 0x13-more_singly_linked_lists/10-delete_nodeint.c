#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in
 *	a linked list at a specified index.
 *
 * @head: Pointer to the first node in the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 (Success) or -1 (Fail).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *buffer = *head;
	listint_t *now = NULL;
	unsigned int i = 0;

	if (*head != NULL)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(buffer);
			return (1);
		}

		while (i < index - 1)
		{
			if (!buffer || !(buffer->next))
				return (-1);
			buffer = buffer->next;
			i++;
		}

		now = buffer->next;
		buffer->next = now->next;
		free(now);

		return (1);
	}
	else
	{
		return (-1);
	}
}

