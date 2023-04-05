#include "main.h"

/**
 * str_checker - Check if 2 strs are identical.
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * @i: First index.
 * @j: special index.
 * Return: 1 or 0
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - Check if strs could be considered identical
 * @s1: base address for string.
 * @s2: base address for string.
 *
 * Return: 1
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}

