#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *         If malloc fails, exit with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

