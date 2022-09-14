#include <stdio.h>
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
	int a;

	a = n;
	while (a <= 98 || 98 <= a)
	{
		printf("%d, ", a);
		a++;
	}
	_putchar('\n');
}
