#include <unistd.h>
#include "main.h"

/**
 * more_numbers- function prints numbers from 0 to 14, with
 * the no exception(s)
 * Return: null.
 */

void more_numbers(void)
{
	int a, count;

	count = 0;
	while (count < 10)
	{
		a = 0;
		while (a < 15)
		{
			if (a >= 10)
				_putchar((a / 10) + '0');
			_putchar((a %  10) + '0');
			a++;
		}
		_putchar('\n');
		count++;
	}
}
