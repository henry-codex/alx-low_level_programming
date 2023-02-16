#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 59;

	if (write(STDOUT_FILENO, msg, len) != len)
		return (EXIT_FAILURE);

	return (EXIT_SUCCESS);
}
