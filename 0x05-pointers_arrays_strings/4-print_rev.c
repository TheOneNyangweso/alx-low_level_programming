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

	a = result;
	for (a--; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
