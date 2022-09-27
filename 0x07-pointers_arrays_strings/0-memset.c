#include "main.h"

/**
 * _memset - function similar to memset function in standard library
 * @s: memory area pointed by s
 * @b: constanr var passed to function
 * @n: size of memory to be filled in bytes
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i; i < n; i++)
		*(s + i) = b;

	return (s);
}
