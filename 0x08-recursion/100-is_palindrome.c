#include "main.h"

/**
 * is_palindrome - function checks if string is palindrome
 * @s: input string
 * Return: 1 if true, else 0
 */

int is_palindrome(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		is_palindrome(s + 1);
	}
	else
		_putchar('\n');

	return (1);
}
