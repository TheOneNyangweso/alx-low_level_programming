#include <stdio.h>

/**
 * main- main function prints all single digit numbers from 0-9
 * and outputs the results
 * Return: null i.e 0
 */

int main(void)
{
	/* Variable initialization */
	int a = 0;

	/* Looping through 0-9 */
	while (a <= 9)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
