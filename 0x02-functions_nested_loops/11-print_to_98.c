#include <stdio.h>
#include <unistd.h>
#include "main.h"

void print_to_98(int n);
{
	int a;
	
	a = print_to_98(n);
	while(a <= 98)
	{
		printf("%d, ", a);
		a++;
	}
	_putchar('\n');
}
