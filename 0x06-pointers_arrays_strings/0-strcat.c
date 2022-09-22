#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: src string argument
 * @src: dest string argument
 * Return: pointer to the resulting strinf dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b, count;

	for (count = 0; *(dest + count) != '\0'; count++)
		;
	for (b = 0; *(src + b); b++)
		;

	for (a = 0; a < b; a++)
	{
		*(dest + count) = *(src + a);
		count++;
		if (a == (b - 1))
			*(dest + count) = '\0';
	}

	return (dest);
}
