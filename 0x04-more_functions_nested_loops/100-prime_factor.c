#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		printf("%d ", a);
		a++;
	}
	return (0);
}

