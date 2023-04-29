#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>


/**
 * struct arr_strc - The linked list
 * @_int: Integer
 * @next_point:
 *
 * Description: Linked list that for node struct
 *
 */

typedef struct arr_strc
{
          int n;
          struct arr_strc *next;
}listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
