#include "main.h"
/**
 * _strlen_recursion - Prints the length of a str.
 * @s: str
 * Return: Len of str
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * pal_checker - Check if s is palindrome.
 * @s: Str base address.
 * @i:First  index.
 * @j: Last index.
 * Return: 1 or 0.
 */
int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - Check if s is palindrome
 * @s: Base address for str.
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}

