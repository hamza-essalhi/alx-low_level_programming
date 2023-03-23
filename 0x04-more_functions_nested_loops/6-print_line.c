#include "main.h"

/**
 * print_line - A function that draws a straight line.
 * @n: int number of  '_'
 * Return: void.
 */
void print_line(int n)
{
int m;
for (m = 0 ; m < n ; m++)
{
	if (n > 0)
	{
		_putchar('_');
	}
	else
	{
		_putchar('\n');
	}
}
_putchar('\n');
}
