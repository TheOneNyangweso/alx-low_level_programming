#include <unistd.h>
#include "main.h"

/**
 * print_most_numbers- function prints numbers from 0 to 9, with
 * the exception of 2 and 4
 * Return: null.
 */

void print_most_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		if (a != 2)
		{
			if (a != 4)
				_putchar(a + '0');
		}
		a++;
	}
	_putchar('\n');
}
