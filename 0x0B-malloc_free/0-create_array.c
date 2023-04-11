#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Get point
 *@size: Size of the arr
 *@c: Char
 * Return: Arr or Null
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
