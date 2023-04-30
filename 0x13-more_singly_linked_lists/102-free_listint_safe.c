#include "lists.h"

/**
 * free_listint_safe - frees the linked list
 * @h: pointer
 *
 * Return: number of elements
 */

size_t free_listint_safe(listint_t **h)
{
	int auth;
	listint_t *buffer;
	size_t length = 0;


	if (!h || !*h)
		return (0);

	while (*h)
	{
		auth = *h - (*h)->next;
		if (auth < 0)
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
		else
		{
			buffer = (*h)->next;
			free(*h);
			*h = buffer;
			length++;
		}
	}

	*h = NULL;

	return (length);

}

