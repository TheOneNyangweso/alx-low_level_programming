#include "main.h"

void _puts_recursion(char *s)
{
	int a;
	a = 0;
	if (s[a] == '\0')
		return (0);
	else
		_putchar(s[a])
	
}
