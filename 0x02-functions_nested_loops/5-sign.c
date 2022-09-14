#include <unistd.h>
#include "main.h"

/**
 * print_sign-checks if int variable n is greater, less or equal to 0
 * @n: int to check.
 * Return: 1 if n is positive, -1 if n is -ve,else return is set to 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
