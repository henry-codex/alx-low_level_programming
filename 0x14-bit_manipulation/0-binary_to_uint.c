#include "main.h"

/**
 * binary_to_uint - Convert binary to unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted number or 0 if the string contains a non-digit.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}

	return (num);
}
