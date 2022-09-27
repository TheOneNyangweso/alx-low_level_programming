#include "main.h"

/**
 * _strpbrk - function similar to strpbrk function in standard library
 * @s: string
 * @accept: string to be matched
 * Return: a pointer to to the byte matched in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, a;

	a = 0;
	while (*(s + a) != '\0')
	{
		i = 0;
		while (*(accept + i) != '\0')
		{
			if (*(s + a) == *(accept + i))
				return (s + a);
			i++;
		}
		a++;
	}
	return ('\0');
}
