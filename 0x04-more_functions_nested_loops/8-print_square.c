#include <unistd.h>
#include "main.h"

/**
 * print_square- function for printing a square
 * @size: parameter for print_square
 * Return: null
 */

void print_square(int size)
{
	int count, b;

	count = 1;
	while (count <= size)
	{
		b = 1;
		while (b <= size)
		{
			_putchar(35);
			b++;
		}
		if (count != size)
			_putchar(10);
		count++;
	}
	_putchar('\n');
}
