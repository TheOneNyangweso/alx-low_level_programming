#include "main.h"

/**
 * string_toupper - converts all lowercases in an array of
 * characters to uppercase
 * @a: array input
 * Return: string in uppercase
 */

char *string_toupper(char *a)
{
	int c = 0, temp;


	while (a[c] != '\0')
	{
		temp = a[c];
		if (temp >= 'a' && temp <= 'z')
			a[c] = temp - 32;
		a[c] = temp;
		c++;
	}

	return (a);
}
