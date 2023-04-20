#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Prints an array of strings, separated by a separator string
 * @separator: The string to separate each string in the array
 * @n: The number of strings in the array
 * @...: The strings to print
 *
 * Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			if (n != i + 1)
			{
				printf("%s", separator);
			}
		}
	}
	else
	{
		return;
	}
	printf("\n");
	va_end(args);
}
