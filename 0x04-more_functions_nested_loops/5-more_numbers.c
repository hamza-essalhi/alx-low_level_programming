#include "main.h"

/**
 * more_numbers - Prit numbers from 0 to 14 10 times.
 * Return: void.
 */
void more_numbers(void)
{
int i;
int j;

for (j = 0 ; j < 10 ; j++)
{
	for (i = 0 ; i <= 14 ; i++)
	{
		if (i >= 10)
		{
			_putchar('1');
		}
		_putchar(i % 10 + '0');
	}

_putchar('\n');
}
}
