#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long factor = 3;

	while (num % 2 == 0)
		num /= 2;

	while (num != 1)
	{
		while (num % factor == 0)
		{
			num /= factor;
			if (factor > 2)
				printf("%lu\n", factor);
		}
		factor += 2;
	}
	return (0);
}

