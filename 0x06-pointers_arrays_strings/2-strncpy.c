#include "main.h"

/**
 * _strncpy - copies strings
 * @dest: src string argument
 * @src: dest string argument
 * @n: test integer
 * Return: pointer to the resulting strinf dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a, b, count;

	for (count = 0; *(dest + count) != '\0'; count++)
		;
	for (b = 0; *(src + b); b++)
		;

	for (a = 0; a < b && a < n && src[a] != '\0'; a++)
	{
		*(dest + a) = *(src + a);
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
