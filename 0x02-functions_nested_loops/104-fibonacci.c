#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, n1 = 0, n2 = 1, sum;

	for (i = 1; i <= 98; i++)
	{
		sum = n1 + n2;
		printf("%d", n2);
		if (i != 98)
			printf(", ");
		n1 = n2;
		n2 = sum;
	}
	printf("\n");
	return (0);
}

