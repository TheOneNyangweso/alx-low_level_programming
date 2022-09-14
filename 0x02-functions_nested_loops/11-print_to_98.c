#include <stdio.h>
#include <unistd.h>
#include "main.h"

void print_to_98(int n)
{
	int a;
	
	a = 98;
	while(a >= n)
	{
		printf("%d, ", n);
		n++;
	}
	_putchar('\n');
}
