/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 *
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 on success, or -1 on failure.
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
