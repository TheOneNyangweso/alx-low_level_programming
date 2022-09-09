#include <stdio.h>

/**
 * main- main function loops through lowercase a up to lowercase z
 * and outputs the results in reverse order
 * Return: null i.e 0
 */

int main(void)
{
	/* Variable initialization */
	char a = 'z';

	/* Looping through the ASCII characters of a-z */
	while (a <= 'z')
	{
		putchar(a);
		a--;
	}
	putchar('\n');

	return (0);
}
