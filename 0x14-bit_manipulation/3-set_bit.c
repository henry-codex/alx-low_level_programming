#include "main.h"

/**
 * set_bit - Sets the bit at given index to 1.
 * @n: A pointer to the decimal number
 * @index: The index in the binary representation to be set to 1
 * Return: 1 if successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number;

	/* check if the index is greater than 64 */
	if (index > 64)
		return (-1);

	number = 0;

	/* loop through each bit until we reach the specified index */
	while (number <= index)
	{
		/* set the bit at the specified index to 1 using bitwise OR */
		*n = (*n | 1 << index);
		number++;
	}

	return (1); /* success */
}

