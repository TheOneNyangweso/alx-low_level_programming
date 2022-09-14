#include <unistd.h>
#include "main.h"

/**
 * _isalpha-checks if char variable c is an alphabet.
 * @c: char to check:
 * Return: 1 if c is alphabet (not case-sensitive) else return is set to 0
 */

int _isalpha(int c)
{
	if (('a' <= c && 'z' >= c) || ('A' <= c && 'Z' >= c))
		return (1);
	else
		return (0);
}
