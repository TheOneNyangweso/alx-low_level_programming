#include <unistd.h>
#include <math.h>

int print_last_digit(int a)
{
	int b;

	if (a >= 0)
		b = a % 10;
	else
		b = (a * -1) % 10;
	return (b)	
}
