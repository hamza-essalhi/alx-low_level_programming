#include "main.h"
/**
 * _strchr - Func that locates a char in a str
 *@s: 1 char
 *@c: 2 char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
	{
		return (s);
	}
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
