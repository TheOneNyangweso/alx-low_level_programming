#include "main.h"

/**
 * print_rev - function prints string in reverse
 * @s: pointer character variable
 */
void print_rev(char *s)
{
	int a, count, result = 0;

	count = 0;
	while (*(s + count) != '\0')
	{
		result = count + 1;
		count++;
	}

	for (a = result; a >= 0; a--)
	{
		if (a == 0)
		{
			_putchar(s[a]);
			break;
		}
		else
			_putchar(s[a]);
	}
	_putchar('\n');
}
