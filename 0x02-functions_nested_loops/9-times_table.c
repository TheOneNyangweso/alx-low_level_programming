#include <unistd.h>
#include "main.h"

/**
 * times_table- function that prints multiplication table 0<=x<10.
 * void- parameter requires no specific data type
 * Return: void.
 */

void times_table(void)
{
	int a, b, c;

	a = 0;

	while (a < 10)
	{
		_putchar('0');
		b = 1;
		while (b < 10)
		{
			c = a * b;

			_puchar(',');
			_putchar(' ');
			if (c <= 9)
			{
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
