#include <unistd.h>
#include "main.h"

/**
 * 
 */

int main(void)
{
	int i;
	char a[] = "_putchar";

	i = 0;

	while (i < 8)
	{
		putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
