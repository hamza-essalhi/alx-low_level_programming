#include "lists.h"

/* Code By Hamza Essalhi*/

/**
 * pop_listint - Removes the first node of a linked list and returns its data.
 *
 * @head: Pointer to a pointer to the first element of the list.
 *
 * Return: The data of the removed node, or 0 if the list is empty.
 **/


int pop_listint(listint_t **head)
{
	listint_t *buffer;
	int number;

	if (!head || !*head)
	{
		return (0)
	}
	else
	{
		number = (*head)->n;
		buffer = (*head)->next;
		free(*head);
		*head = buffer;
		return (number);
	}


}
