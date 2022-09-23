#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array input
 * @n: number of elements in the array input
 * Return: null.
 */

void reverse_array(int *a, int n)
{
	int c = 0, temp, b = n - 1;

	while (c <= b)
	{
		temp = a[c];
		a[c] = a[b];
		a[b] = temp;
		b--;
		c++;
	}
}
