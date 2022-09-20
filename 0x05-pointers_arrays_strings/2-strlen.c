#include "main.h"

/**
 * _strlen - function returns length of string
 * @s: pointer character variable
 * Return: length of string.
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count += 1;
		count++;
	}
	return (count);
}
