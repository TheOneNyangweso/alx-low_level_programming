#include <unistd.h>
#include "main.h"

/**
 * print_line- function for printline
 * @n: parameter for print_line
 * Return: null
 */

void print_line(int n)
{
	int count;

	if (n <= 0)
		_putchar('\n');
	count = 1;
	while (count <= n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
