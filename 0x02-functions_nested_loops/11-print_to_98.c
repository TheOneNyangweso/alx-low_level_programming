#include <stdio.h>
#include <unistd.h>
#include "main.h"

void print_to_98(int n);
{
	while(n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	_putchar('\n');
}
