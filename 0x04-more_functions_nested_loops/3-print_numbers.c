#include <unistd.h>
#include "main.h"

/**
 * print_numbers- function prints numbers from 0 to 9
 * Return: null.
 */

void print_numbers(void)
{
	int a;

	a = 0;
	for (a; a < 10; a++)
		_putchar(a + '0');
}
