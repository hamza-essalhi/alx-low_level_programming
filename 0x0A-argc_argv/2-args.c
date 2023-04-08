#include <stdio.h>
/**
 * main - Prints all args
 * @argc: Number of args
 * @argv: Array of args
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
