#include <unistd.h>
#include <math.h>
#include "main.h"

/**
 * _abs- function _abs prints the absolute number of an input
 * @a: parameter for check
 * Return: result, which the absolute value.
 */
int _abs(int a)
{
	int result;

	if (a < 0)
		result = a * -1;
	else
		result = a;

	return (result);
}
