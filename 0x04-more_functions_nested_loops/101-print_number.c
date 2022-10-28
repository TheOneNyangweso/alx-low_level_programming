#include "main.h"

/**
 * print_number-function prints an integer.
 * @n: parameter variable for function print_number
 * Return: null
 */

void print_number(int n)
{
	int a, b, count = 1;

	a = n;

	if (a >= 0 && a <= 9)
		_putchar(a + '0');
	else if (a < 0)
		a = a * -1;

	while (a > 9)
	{
		a = a / 10;
		count = count * 10;
	}

	a = n;
	while (count >= 1 && !(a >= 0 && a <= 9))
	{
		if (a < 0)
		{
			_putchar('-');
			a = a * -1;
		}

		b = (a / count) % 10;
		_putchar(b + '0');
		count = count / 10;
	}
}
