#include <stdlib.h>
#include "main.h"

/**
 * *_memory_set - Fills memory with a const of byte
 * @s: Memory area
 * @b: Char to copy
 * @n: Number of times to copy char b
 *
 * Return: pointer s
 */
char *_memory_set(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - Allocates memory for an arr
 * @nmemb: Number of elements in the arr
 * @size: Size elements
 * Return: pointer of memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *temp;

	if (nmemb == 0 || size == 0)
		return (NULL);

	temp = malloc(size * nmemb);

	if (temp == NULL)
		return (NULL);

	_memory_set(temp, 0, nmemb * size);

	return (temp);
}

