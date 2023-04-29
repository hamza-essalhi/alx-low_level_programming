#include "lists.h"


/*code by Hamza Esslhi */


/**
 * free_listint2 - Frees a linked list and sets head to NULL.
 *
 * @head: Pointer to a pointer to the first element of the list.
 **/


void free_listint2(listint_t **head)
{
	listint_t *buffer;

	if (head != NULL)
	{
		while (*head)
		{
			buffer = (*head)->next;
			free(*head);
			*head = buffer;
		}
	}
	else
	{
		return;
	}

	*head = NULL;
}
