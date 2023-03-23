#include "main.h"

/**
 * more_numbers - Prit numbers from 0 to 14 10 times.
 * Return: void.
 */
void more_numbers(void)
{
char i;
int j;
char k;
for (j = 0 ; j < 10 ; j++)
{
	for (i = '0' ; i <= '9' ; i++)
	{
		_putchar(i);
		if (i == '9')
		{
			for (k = '0'; k <= '4' ; k++)
			{
				_putchar('1');
				_putchar(k);
			}
		}
	}

_putchar('\n');
}
}
