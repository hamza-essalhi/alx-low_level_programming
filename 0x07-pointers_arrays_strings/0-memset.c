#include "main.h"
/**
 * _memset - function that fills memory with a const byte
 *@s: 1st value
 *@b: 2 value
 *@n: 3 value
 *
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
