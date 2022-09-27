#include "main.h"

/**
 * _strchr - function similar to strchr function in standard library
 * @s: returns pointer to c
 * @c: char to be searched
 * Return: a pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return ('\0');
}
