#include <unistd.h>
#include <math.h>
#include "main.h"

/**
 * _abs- function _abs prints the absolute number of an input
 * @a: parameter for check
 * Return: a, which the absolute value.
 */
int _abs(int a)
{
	int a, result;

	result = pow(a, 2);
	a = result / a;

	return (a);
}
