#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints a variable number of integers, separated by a
 *                 given separator string
 *
 * @separator: the string to separate the numbers
 * @n: the number of integers passed to the function
 * @...: the list of integers to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);
if (separator != NULL)
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i != n - 1)
	printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
