#include <unistd.h>
#include "main.h"

/**
 * _isdigit- function checks if int input is 0 <= n <=9
 * @c: parameter variable for _isdigit where input is passed to.
 * Return: 1 if true, 0 if false.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
