#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: src string argument
 * @src: dest string argument
 * @n: test integer
 * Return: pointer to the resulting strinf dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b, count;

	for (count = 0; *(dest + count) != '\0'; count++)
		;
	for (b = 0; *(src + b); b++)
		;

	for (a = 0; a < b && a < n; a++)
	{
		*(dest + count) = *(src + a);
		count++;
		if (a == (b - 1))
			*(dest + count) = '\0';
	}

	return (dest);
}
