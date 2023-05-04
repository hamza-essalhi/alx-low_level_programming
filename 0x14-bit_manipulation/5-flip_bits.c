#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped
 *             to convert one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit_index, bit_count = 0;
	unsigned long int current_bit;
	unsigned long int exclusive_bits = n ^ m;

	for (bit_index = 63; bit_index >= 0; bit_index--)
	{
		current_bit = exclusive_bits >> bit_index;
		if (current_bit & 1)
			bit_count++;
	}

	return (bit_count);
}

