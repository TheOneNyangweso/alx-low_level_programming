#include <stdio.h>

/**
 * main- main function loops through lowercase a up to lowercase z
 * and then from uppercase A to uppercase Z and outputs the results
 * Return: null i.e 0
 */

int main(void)
{
	/* Variable initialization */
	char a = 'a', b = 'A';

	/* Looping through the ASCII characters of a-z */
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
