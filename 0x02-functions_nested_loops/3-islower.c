#include <unistd.h>
#include "main.h"

/**
 * _islower-checks if char variable c is lower.
 * @c: char to check:
 * Return: 1 if c is lowercase else return is set to 0
 */

int _islower(int c)
{
	if ('a' <= c && 'z' >= c)
		return (1);
	else
		return (0);
}
