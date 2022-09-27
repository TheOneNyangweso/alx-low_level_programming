#include "main.h"

/**
 * _strpbrk - function similar to strpbrk function in standard library
 * @s: returns pointer to s
 * @accept: string to be matched
 * Return: a pointer to to the byte matched in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, a;

	a = 0;
	while (*(s + a))
	{
		i = 0;
		while (*(accept + i))
		{
			if (*(s + a) == *(accept + i))
			{
				return (s);
			}
			i++;
		}
		a++;
	}
	return ('\0');
}
