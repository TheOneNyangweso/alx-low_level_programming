#include <unistd.h>
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
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		if (count != n)
			_putchar('\n');
		count++;
	}
	_putchar('\n');
}
