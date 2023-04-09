#include "holberton.h"

/**
 * get_endianness - Check the kind of endian
 * Return: 1 if little or 0 if big endian
 */
int get_endianness(void)
{
	unsigned int n = 1; // Initialize an unsigned int variable with the value of 1
	char *ch = (char *)&n; // Create a char pointer to point to the memory address of n

	if (*ch) // Check the value of the first byte in the memory location pointed by ch
		return (1); // If the value of the first byte is not zero, return 1 indicating little endian
	else
		return (0); // If the value of the first byte is zero, return 0 indicating big endian
}

