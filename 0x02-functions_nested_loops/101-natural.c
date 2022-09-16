#include <stdio.h>

/**
 * main - main function prints the sum of numbers below 1024 that are
 * multiplies of 3 or 5
 *
 * Return: 0.
 */
int main(void)
{
	int b, c;

	for (b = 1; c < 1024; b++)
	
		if ((b % 3) == 0 || (b % 5) == 0)
			c = b + c;
	}
	printf("%d\n", c);
	return (0);
}
