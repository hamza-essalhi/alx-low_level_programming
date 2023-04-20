#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - calculates the sum of a variable number of integers
 * @n: the number of integers passed to the function
 * @...: the variable arguments, a list of integers
 *
 * Return: the sum of the integers
 */



int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

