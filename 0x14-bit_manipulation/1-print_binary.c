#include "main.h"

/**
 * print_binary - prints the binary
 * @n: The printed number in binary
 */
void print_binary(unsigned long int n)
{
	int i, calc_var = 0;
	unsigned long int shift_var;

	for (i = 63; i >= 0; i--)
	{
		shift_var = n >> i;

		if (shift_var & 1)
		{
			_putchar('1');
			calc_var++;
		}
		else if (calc_var)
			_putchar('0');
	}
	if (!calc_var)
		_putchar('0');
}
