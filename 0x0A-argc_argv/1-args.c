#include <stdio.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: Number of args
 * @argv: Array of args
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
