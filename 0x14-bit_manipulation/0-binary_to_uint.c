#include "main.h"

/**
 * binary_to_uint - Convert binary to unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted number or 0 if the string contains a non-digit.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, binaryDigit = 0, index = 0;

	if (!b)
		return (0);

	/* Get the size of the binary string */
	while (b[index])
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		index++;
	}

	/* Convert the binary string to a decimal number */
	index--;
	while (index >= 0)
	{
		binaryDigit = b[index] - '0';
		decimal += binaryDigit << (len - index - 1);
		index--;
	}

	return (decimal);
}

