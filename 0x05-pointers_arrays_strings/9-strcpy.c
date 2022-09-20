#include "main.h"

/**
 * _strcpy - function which performs similar function as
 * strcpy () function in the standard library
 * @dest: array referenced by *dest
 * @src: content of string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
