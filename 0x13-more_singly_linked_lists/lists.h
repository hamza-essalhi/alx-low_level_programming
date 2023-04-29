#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>


/*Code By Hamza essalhi*/

/**
 * struct arr_strc - The linked list
 * @n: Integer
 * @next: Next point
 *
 * Description: Linked list that for node struct
 *
 */

typedef struct arr_strc
{
	int n;
	struct arr_strc *next;
} listint_t;

/* t 0 by Hamza Essalhi */

size_t print_listint(const listint_t *h);

/* t 1 by Hamza Essalhi */

size_t listint_len(const listint_t *h);

/* t 2 by Hamza Essalhi */

listint_t *add_nodeint(listint_t **head, const int n);

/* t 3 by Hamza Essalhi */

listint_t *add_nodeint_end(listint_t **head, const int n);

/* t 4 by Hamza Essalhi */

void free_listint(listint_t *head);

/* t 5 by Hamza Essalhi */

void free_listint2(listint_t **head);

/* t 6 by Hamza Essalhi */

int pop_listint(listint_t **head);

/* t 7 by Hamza Essalhi */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);



#endif
