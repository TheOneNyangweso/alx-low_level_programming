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

	a = '0';

	while (a < 10)
	{
		b = '0';
		while (b < 10)
		{
			c = a * b;
			_putchar(c);
			_putchar(',');
			_putchar(' ');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
