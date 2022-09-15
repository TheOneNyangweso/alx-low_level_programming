#include <unistd.h>
#include "main.h"

/**
 * _isupper- function checks if char input is uppercase
 * @c: parameter variable for _isupper
 * Return: 1 if input is uppercase, else return 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
