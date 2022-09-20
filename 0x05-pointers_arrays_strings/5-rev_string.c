#include "main.h"

/**
 * rev_string - function reverses a string
 * @s: pointer character variable
 */
void rev_string(char *s)
{
	int a, b, count, result;

	count = 0;
	while (*(s + count) != '\0')
	{
		result = count + 1;
		count++;
	}

	a = result;
	for (a--; a >= 0; a--)
	{
		for (b = 0; b <= result; b++)
			s[b] = _putchar(s[a]);
	}
}
