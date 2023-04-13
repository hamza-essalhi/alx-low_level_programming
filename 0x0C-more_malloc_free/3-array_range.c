#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Generate arry of ints
 * @min: The min range
 * @max: The max range
 * Return: Pointer to arr
 */
int *array_range(int min, int max)
{
	int *temp;
	int i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	temp = malloc(sizeof(int) * s);

	if (temp == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		temp[i] = min++;

	return (temp);
}

