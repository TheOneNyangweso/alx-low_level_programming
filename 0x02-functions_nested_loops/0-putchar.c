#include <unistd.h>
#include "main.h"

/**
 * 
 */

int main(void)
{
	_putchar('c');
	return (0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
