#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int calc;
	listint_t *buffer;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		calc = *h - (*h)->next;
		if (calc > 0)
		{
			buffer = (*h)->next;
			free(*h);
			*h = buffer;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}

	*h = NULL;

	return (lenght);
}

