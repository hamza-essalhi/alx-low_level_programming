#include "lists.h"


/**
 * add_nodeint - Adds a new node at the beginning
 *	of a linked list of integers.
 * @head: Pointer to a pointer to the head node of the linked list
 * @n: Integer value to store in the new node
 *
 * Return: Pointer to the new node, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
