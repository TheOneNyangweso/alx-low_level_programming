#include "main.h"

/**
 * print_diagonal- function for printing a diagonal line
 * @n: parameter for print_diagonal
 * Return: null
 */

void print_diagonal(int n)
{
	int count, b;

	count = 1;
	while (count <= n)
	{
		b = 1;
		while (b <= count)
		{
			_putchar(32);
			b++;
		}
		_putchar(92);
		if (count != n)
			_putchar(10);
		count++;
	}
	_putchar(10);
}
