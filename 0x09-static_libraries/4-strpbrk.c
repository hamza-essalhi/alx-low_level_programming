#include "main.h"
/**
 * _strpbrk - Func that searches a str for any of a set of byte
 *@s: 1 char
 *@accept: 2 char
 *
 * Return: char with result
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		j = 0;
		s++;
	}
	return ('\0');
}
