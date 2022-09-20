#include "main.h"

/**
 * _strlen - function returns length of string
 * @s: pointer character variable
 * Return: length of string.
 */

int _strlen(char *s)
{
	int count, result = 0;

	count = 0;
	while (*(s + count) != '\0')
	{
		result = count + 1;
		count++;
	}
	return (result);
}
