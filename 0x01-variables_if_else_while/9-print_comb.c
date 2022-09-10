#include <stdio.h>
/**
 * main- main function produces combination of all single digit numbers
 * and outputs result
 *
 * Return: null i.e zero
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
