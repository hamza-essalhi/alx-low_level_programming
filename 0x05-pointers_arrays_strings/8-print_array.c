#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n element of an array of ints
 * @a: Int to check
 * @n: Int to check
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
if (x != n - 1)
{
printf("%d, ", a[x]);
}
else
{
printf("%d", a[x]);
}
}
printf("\n");
}
