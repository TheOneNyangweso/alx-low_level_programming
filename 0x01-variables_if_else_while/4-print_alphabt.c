#include <stdio.h>

/**
 * main- main function loops through lowercase a up to lowercase z
 * and outputs the results except letters q and e
 * Return: null i.e 0
 */

int main(void)
{
	/* Variable initialization */
	char a = 'a';

	/* Looping through the ASCII characters of a-z */
	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
			putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
