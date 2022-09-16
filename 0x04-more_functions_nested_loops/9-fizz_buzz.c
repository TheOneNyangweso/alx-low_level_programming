#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

void fizz_buzz(void);

int main (void)
{
	fizz_buzz();
	return (0);
}

void fizz_buzz(void)
{
	int a, b, c, d;
	char fizz[] = "Fizz", buzz[] = "Buzz";
	char f_buzz[] = "FizzBuzz";

	for (a = 1; a <= 100; a++)
	{
		b = a % 3;
		c = a % 5;
		d = b + c;
		if (b == 0)
			printf("%s ", fizz);
		else if (c == 0)
			printf("%s ", buzz);
		else if (d == 0)
			printf("%s ", f_buzz);
		else
			printf("%d ", a);
	}
	putchar(10);
}

