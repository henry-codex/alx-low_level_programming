#include "main.h"

/**
 * clear_bit - Set a 0 in a given position
 * @n: A pointer to the decimal number to modify
 * @index: The index in the binary representation of the number to clear
 *
 * Return: 1 if successful, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_index;

	/* Verify the index is within the allowed range */
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bit_index = 0;

	/* Loop through each bit of the number up to the given index */
	while (bit_index <= index)
	{
		*n &= ~(1UL << index);
		bit_index++;
	}

	return (1);
}

