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
	int a;

	a = n;
	if (a > 98)
	{
		while  (98 < a)
		{
			printf("%d,", a);
			printf(" ");
			a--;
		}
	}	
	else if (a < 98)
	{
		while  (a < 98)
		{
			printf("%d,", a);
			printf(" ");
			a++;
		}
	}
	else
	{
		printf("%d ", a);
		exit (0);
	}
	printf("98");
	_putchar('\n');
}
