#include "lists.h"

/* Code by Hamza Essalhi */

/**
 * insert_nodeint_at_index - Inserts a new node at a specified position
 * in a linked list.
 *
 * @head: Pointer to the first node in the list.
 * @idx: Index where the new node should be added.
 * @n: Data to insert in the new node.
 *
 * Return: Pointer to the new node, or NULL.
 */




listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *buffer = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	else
	{
		new->n = n;
		new->next = NULL;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}

		for (i = 0; buffer && i < idx; i++)
		{
			if (i == idx - 1)
			{
				new->next = buffer->next;
				buffer->next = new;
				return (new);
			}
			else
				buffer = buffer->next;
		}

		return (NULL);
	}


}
