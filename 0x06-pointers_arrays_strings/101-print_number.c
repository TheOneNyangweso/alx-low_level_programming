#include "main.h"

/**
 * print_number - function prints numbers using _putchar only
 * The concept of recursion is applied here
 * @n: argument where int variable is passed to
 * Return: null
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		_print_number(n / 10);

	_putchar(n % 10 + '0');

}
