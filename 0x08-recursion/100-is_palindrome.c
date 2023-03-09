#include "main.h"
#include "string.h"
/**
 * is_palindrome - find a palindrome string
 * @s: string for check
 *
 * Return: 1 if is palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int i;

	if (len <= 1)
		return (1);

	for (i = 0; i < len / 2; i++)
	{
		if (*(s + i) != *(s + len - i - 1))
			return (0);
	}

	return (1);
}

