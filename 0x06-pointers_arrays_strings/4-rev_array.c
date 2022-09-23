#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array input
 * @n: number of elements in the array input
 * Return: null.
 */

void reverse_array(int *a, int n)
{
	int c = 0, *temp, *b;

	while (c <= n)
	{
		temp[c] = a[n];
		b[c] = temp[c];
		a[c] = b[c];
		n--;
		c++;
	}
}
