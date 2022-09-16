#include <stdio.h>

/**
 * main-function outputs the Fibonacci series
 *
 * Return: 0 indicating success.
 */
int main(void)
{
	int a;
	long int b, c, d;

	b = 1;
	c = 2;
	printf("%ld, %ld", b, c);

	a = 0;
	while (a < 48)
	{
		d = b + c;
		printf(", %ld", d);
		b = c;
		c = d;
		a++;
	}
	printf("\n");
	return (0);
}
