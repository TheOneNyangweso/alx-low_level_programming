#include <unistd.h>
#include "main.h"

/**
 * _islower-checks if char variable c is lower.
 * int c- parameter for c
 * Return: 1 if c is lowercase else return is set to 0
 */

int _islower(int c)
{
	if ('a' <= c && 'z' >= c)
		return (1);
	else
		return (0);
}
