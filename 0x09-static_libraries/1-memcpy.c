#include "main.h"
/**
 * _memcpy - Func that copies a memory area
 *@dest: The address of memory to print
 *@src: 1 value
 *@n: 2 value
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
