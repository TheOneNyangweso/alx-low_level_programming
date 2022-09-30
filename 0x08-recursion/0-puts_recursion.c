#include "main.h"

/**
 * _puts_recursion - function prints string
 * @s: input string
 * Return: null
 */

void _puts_recursion(char *s)
{
	int a;

	a = 0;
	if (s[a] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[a]);
		a++;
		_puts_recursion(s[a]);
	}
}
