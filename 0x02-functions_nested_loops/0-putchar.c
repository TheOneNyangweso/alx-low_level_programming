#include <unistd.h>
#include "main.h"

/**
 * main- prints _putchar followed by newline.
 * Return: 0 i.e null after successful completion.
 */
int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n')
	return (0);
}
