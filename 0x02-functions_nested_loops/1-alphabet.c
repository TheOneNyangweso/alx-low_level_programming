#include <unistd.h>
#include "main.h"

/**
 * print_alphabet- prints lowercase alphabet followed by newline.
 * Return: 0 i.e null after successful completion.
 */
void print_alphabet(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
