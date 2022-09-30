#include "main.h"

/**
 * _puts_recursion - function prints string
 * @s: input string
 * Return: null
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
