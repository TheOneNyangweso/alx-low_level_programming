#include <stdio.h>
#include "main.h"

/**
 * print_array - function prints n elements of an array of integers.
 * @a: integer pointer variable
 * @n: integer variable for accepting number of elements
 */

void print_array(int *a, int n)
{
	int size;

	for (size = 0; size < n; size++)
	{
		if (size != (n - 1))
			printf("%d, ", *(a + size));
		else
			printf("%d\n", *(a + size));
		if (n < 0)
			printf("\n");
	}
}
