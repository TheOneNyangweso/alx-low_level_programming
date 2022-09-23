#include "main.h"

/**
 * cap_string - capitalies all words in an array of
 * characters to uppercase
 * @a: array input
 * Return: string in capital-case
 */

char *cap_string(char *a)
{
	int c = 0, count;

	for (count = 0; a[count]; count++)
		;


	while (c <= count)
	{
		if (a[c] == ' ' || a[c] == '\n')
			a[c] = (a[c]) - 32;
		c++;
	}

	return (a);
}
