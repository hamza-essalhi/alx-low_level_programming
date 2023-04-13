#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - Split ints form str
 * @s: str
 * Return: 0 or 1
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _get_str_len - Get the main_length of a str
 * @s: Str
 *
 * Return: the main_length of the str
 */
int _get_str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies 2 positive numbers
 * @argc: Number of args
 * @argv: Arr of args
 *
 * Return: always 0 | Success
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int main_length1, main_length2, main_len, i, main_arr, n, m, *s, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	main_length1 = _get_str_len(s1);
	main_length2 = _get_str_len(s2);
	main_len = main_length1 + main_length2 + 1;
	s = malloc(sizeof(int) * main_len);
	if (!s)
		return (1);
	for (i = 0; i <= main_length1 + main_length2; i++)
		s[i] = 0;
	for (main_length1 = main_length1 - 1; main_length1 >= 0; main_length1--)
	{
		n = s1[main_length1] - '0';
		main_arr = 0;
		for (main_length2 = _get_str_len(s2) - 1; main_length2 >= 0; main_length2--)
		{
			m = s2[main_length2] - '0';
			main_arr += s[main_length1 + main_length2 + 1] + (n * m);
			s[main_length1 + main_length2 + 1] = main_arr % 10;
			main_arr /= 10;
		}
		if (main_arr > 0)
			s[main_length1 + main_length2 + 1] += main_arr;
	}
	for (i = 0; i < main_len - 1; i++)
	{
		if (s[i])
			a = 1;
		if (a)
			_putchar(s[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(s);
	return (0);
}
