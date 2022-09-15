#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - outputs n to 98.
 * @n: parameter for accepting int variable n.
 *
 * Return: all natural numbers from n to 98.
 */

void print_to_98(int n)
{
	while  (n >= 98)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d", n);
			exit (0);
		n--;
	}
	while  (n <= 98)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d", n);
		n++;
	}
	_putchar('\n');
}
