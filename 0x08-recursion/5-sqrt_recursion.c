#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of number input
 * @n: input number
 * Return: integer length of string input.
 */
int _sqrt_recursion(int n)
{
	if (n == '\0')
		return (0);
	else
		return (1 + _sqrt_recursion(n + 1));
}
