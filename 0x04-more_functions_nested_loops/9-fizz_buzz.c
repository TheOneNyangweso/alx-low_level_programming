#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int a, b, c, d;
	char fizz[] = "Fizz", buzz[] = "Buzz";
	char f_buzz[] = "FizzBuzz";

	for (a = 1; a <= 100; a++)
	{
		b = a % 3;
		c = a % 5;
		d = a % 15;
		if (d == 0)
			printf("%s ", f_buzz);
		else if (b == 0)
			printf("%s ", fizz);
		else if (c == 0)
			printf("%s ", buzz);
		else
			printf("%d ", a);
	}
	putchar(10);
	return (0);
}

