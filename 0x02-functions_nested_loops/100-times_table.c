#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_times_table- function that prints multiplication table of 0 <= n <= 15
 * @n: parameter requires no specific data type
 * Return: void.
 */

void print_times_table(int n)
{
	int a, b, c, d;

	a = 0;

	if (n > 15 || n < 0)
		exit(0);

	while (a <= n)
	{
		_putchar('0');
		b = 1;
		while (b <= n)
		{
			c = a * b;
			d = n * 2;
			if (c < d || c == 4)
			{
				_putchar(',');
				_putchar(32);
				_putchar(32);
				_putchar(32);
				_putchar(c + '0');
			}
			else
			{
				_putchar(',');
				_putchar(32);
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
