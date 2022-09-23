#include "main.h"

/**
 * string_toupper - converts all lowercases in an array of
 * characters to uppercase
 * @a: array input
 * Return: string in uppercase
 */

char *string_toupper(char *a)
{
	int c = 0, count;

	for (count = 0; a[count]; count++)
		;


	while (c <= count)
	{
		if (a[c] >= 'a' && a[c] <= 'z')
			a[c] = (a[c]) - 32;
		c++;
	}

	return (a);
}
