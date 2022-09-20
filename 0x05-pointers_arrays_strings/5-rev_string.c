#include "main.h"

/**
 * rev_string - function reverses a string
 * @s: pointer character variable
 */
void rev_string(char *s)
{
	int a, size;
	int count, result;
	char *b, *temp;

	count = 0;
	while (*(s + count) != '\0')
	{
		result = count + 1;
		count++;
	}

	a = 0;
	for (size = result; size >= 0; size--)
	{
		*(b + a) = *(s + size);
		a++;
	}
	temp = b;
	*s = temp;
}
