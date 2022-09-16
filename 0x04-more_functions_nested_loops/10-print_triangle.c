#include <unistd.h>
#include "main.h"

/**
 * print_triangle- function for printing a triangle
 * @size: parameter for print_triangle
 * Return: null
 */

void print_triangle(int size)
{
	int count, b, c;

	count = 1;
	while (count <= size)
	{
		b = size;
		while (b >= 0)
		{
			_putchar(' ');
			b--;
		}
		c = 0;
		while (c <= size)
		{
			_putchar(35);
			c++;
		}
		if (count != size)
			_putchar('\n');
		count++;
	}
	_putchar('\n');
}
