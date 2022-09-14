#include <unistd.h>
#include "main.h"

/**
 * print_alphabet- prints lowercase alphabet 10 times, followed by newline.
 * Return: 0 i.e null after successful completion.
 */
void print_alphabet_x10(void)
{
	int count;
	char a;

	count = 0;
	while (count < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		count++;
	}
	_putchar('\n');
}
