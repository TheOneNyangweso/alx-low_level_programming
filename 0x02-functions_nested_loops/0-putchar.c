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
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
