#include "main.h"

/**
 * _pow_recursion - returns the exponential value of a base
 * @x: base.
 * @y: exponent.
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
