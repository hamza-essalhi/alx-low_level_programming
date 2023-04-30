#include "lists.h"

/**
 * find_listint_loop - To finds the loop
 * @head: for searching the linked list
 *
 * Return: address of the node , or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast_speed = head;
	listint_t *slow_speed = head;

	if (head)
	{
		while (slow_speed && fast_speed && fast_speed->next)
		{
			fast_speed = fast_speed->next->next;
			slow_speed = slow_speed->next;
			if (fast_speed == slow_speed)
			{
				slow_speed = head;
				while (slow_speed != fast_speed)
				{
					fast_speed = fast_speed->next;
					slow_speed = slow_speed->next;
				}
				return (fast_speed);
			}
		}

		return (NULL);
	}
	else
	{
		return (NULL);
	}
}

