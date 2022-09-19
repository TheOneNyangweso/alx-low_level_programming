#include "main.h"

/**
 * swap_int - function swaps values of two integers
 * @a: pointer variable that points to integer one
 * @b: pointer variable that points to integer two
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *b;
	d = *a;
	*a = c;
	*b = d;
}
