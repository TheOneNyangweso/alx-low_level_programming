#include <stdio.h>

/**
 * main- main function prints all hex numbers from 0-F
 * and outputs the results
 * Return: null i.e 0
 */

int main(void)
{
	/* Variable initialization */
	int a = 0x0;

	/* Looping through 0-F */
	while (a <= 0xF)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');

	return (0);
}
