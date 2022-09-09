#include <stdio.h>

/*
 * main: function main loops through lowercase a up to lowercase z
 * Return: null
 */

int main(void)
{
	/* Variable initialization */
	char a = 'a';

	/* Looping through the ASCII characters of a-z */
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return 0;
}
