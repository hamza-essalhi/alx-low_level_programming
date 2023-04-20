#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - add two numbers
 * @n1: num 1
 * @n2: num 2
 *
 * Return: n1+n2
 */
int op_add(int n1, int n2)
{
	return (n1 + n2);
}
/**
 * op_sub - sub two numbers
 * @n1: num 1
 * @n2: num 2
 *
 * Return: n1-n2
 */
int op_sub(int n1, int n2)
{
	return (n1 - n2);
}
/**
 * op_mul - mul two numbers
 * @n1: num 1
 * @n2: num 2
 *
 * Return: n1*n2
 */
int op_mul(int n1, int n2)
{
	return (n1 * n2);
}
/**
 * op_div - div two numbers
 * @n1: num 1
 * @n2: num 2
 *
 * Return: n1/ n2.
 */
int op_div(int n1, int n2)
{
	if (n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (n1 / n2);
}
/**
 * op_mod - mod of  two numbers
 * @n1: num 1
 * @n2: num 2
 *
 * Return: a % b.
 */
int op_mod(int n1, int n2)
{
	if (n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (n1 % n2);
}
