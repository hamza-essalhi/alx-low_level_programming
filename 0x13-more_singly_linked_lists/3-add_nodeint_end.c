#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the end of a linked list.
 *
 * @head: Pointer to a pointer to the first element of the list.
 * @n: Data to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *buffer = *head;

	new = malloc(sizeof(listint_t));

	if (new)
	{
		new->n = n;
		new->next = NULL;

	}
	else
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (buffer->next)
	{
		buffer = buffer->next;
	}
	buffer->next = new;
	return (new);

}
