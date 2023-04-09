#include "main.h"

/**
 * get_bit - Get the bit at given index.
 * @n: The decimal number.
 * @index: The index in the binary representation.
 *
 * Return: The bit in the position or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int number;

	/* If index is greater than the number of bits in n */
	if (index > 64)
		return (-1);

	number = 0;

	/* Shift n to the right until we reach the desired index */
	while (number < index)
	{
		n = (n >> 1);
		number++;
	}

	/* Return the bit at the desired index */
	return (n & 1);
}

