#include "main.h"
/**
 * _strspn - Func that gets the len of a prefix substring
 *@s: 1 char
 *@accept: 2 char
 * Return: char
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, i = 0;
	unsigned int a = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				a++;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (a);
}
