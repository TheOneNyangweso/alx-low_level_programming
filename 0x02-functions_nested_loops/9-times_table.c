#include <unistd.h>
#include "main.h"

/**
 * time_table- function that prints multiplication table 0<=x<10.
 * void- parameter requires no specific data type
 * Return: a * b, which is the full multiplication table.
 */

void time_table(void)
{
	int a, b;

	a = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			return (a * b);
			b++;
		}
		_putchar('\n')
		a++;
	}
}
