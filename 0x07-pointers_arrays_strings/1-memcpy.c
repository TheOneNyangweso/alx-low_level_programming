#include "main.h"

/**
 * _memcpy - function similar to memcpy function in standard library
 * @dest: destination memory area pointed by dest
 * @src: memory source to be passed to function
 * @n: size of memory to be filled in bytes
 * Return: a pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (src);
}
