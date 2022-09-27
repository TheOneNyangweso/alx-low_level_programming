#include "main.h"

/**
 * _strspn - function similar to strspn function in standard library
 * @s: initial string segment
 * @accept: char to be searched
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;
	unsigned int a, i;

	length = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		a = 0;
		while (*(accept + a) != '\0')
		{
			if (*(s + i) == accept[a])
			{
				length++;
				break;
			}
			else if ((*(accept + a) + 1)  == '\0')
			{
				return (length);
			}
			a++;
		}
		i++;
	}
	return (length);
}
