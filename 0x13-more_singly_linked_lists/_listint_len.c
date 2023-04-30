#include "lists.h"


/**
 * _listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t _listint_len(const listint_t *head)
{
	const listint_t *a, *b;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	a = head->next;
	b = (head->next)->next;

	while (b)
	{
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				n++;
				a = a->next;
				b = b->next;
			}

			a = a->next;
			while (a != b)
			{
				n++;
				a = a->next;
			}

			return (n);
		}

		a = a->next;
		b = (b->next)->next;
	}

	return (0);
}

