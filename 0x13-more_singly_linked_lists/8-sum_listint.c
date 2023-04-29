#include "lists.h"

/**
 * sum_listint - calculates the sum
 * @head: pointer
 *
 * Return: s
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *buffer = head;

	while (buffer != NULL)
	{
		s += buffer->n;
		buffer = buffer->next;
	}

	return (s);
}
