#include "main.h"

/**
 * print_chessboard - prints 2-D chessboard
 * @a: input
 * Return: null.
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	c = 0;
	for (b = 0; b < 64; b++)
	{
		if (b % 8 == 0 && b != 0)
		{
			c = b;
			_putchar('\n');
		}
		_putchar(a[b / 8][b - c]);
	}
	_putchar('\n');
}
