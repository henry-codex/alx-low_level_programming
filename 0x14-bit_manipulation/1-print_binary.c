#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 *
 * Return: No return value (void).
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = ULONG_MAX >> 1;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');
		mask >>= 1;
	}
}

