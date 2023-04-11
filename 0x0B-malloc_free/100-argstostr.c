#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concat all the args
 *@ac: Number of args
 *@av: Args
 * Return: Pointer to a str
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	char *p = NULL;
	int k;
	int e;

	k = 0;
	e = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			e++;
		}
	}

	p = (char *)malloc(e + ac + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
