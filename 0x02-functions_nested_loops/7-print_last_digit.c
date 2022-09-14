#include <unistd.h>
#include <math.h>

/**
 * print_last_digit- function prints last digit of input
 * @a: parameter for input.
 * Return: int var b, the last digit of input
 */

int print_last_digit(int a)
{
	int b;

	if (a >= 0)
		b = (a % 10);
	else
		b = (a * -1) % 10;
	_putchar(b);
	_putchar(b);
}
