#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - program that performs simple operations
 * @argc: args
 * @argv: vector args
 * Return: false = 0, or seccess.
 */
int main(int argc, char *argv[])
{
	int (*get)(int, int);
	int n, m, opr;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	opr = argv[2][0];
	switch (opr)
	{
	case '+':
		break;
	case '-':
		break;
	case '*':
		break;
	case '/':
		break;
	case '%':
		break;
	default:
		printf("Error\n");
		exit(99);
	}

	n = atoi(argv[1]);
	m = atoi(argv[3]);
	get = get_op_func(argv[2]);
	printf("%d\n", get(n, m));
	return (0);
}
