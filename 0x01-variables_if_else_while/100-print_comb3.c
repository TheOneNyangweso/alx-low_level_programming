#include <stdlib.h>
#include <stdio.h>
/**
 * main - function prints combination of no.s
 * Return: null on success compilation
 */
int main(void)
{
	int a, b;

	a = 0;

	while (a <= 8)
	{
		b = 0;
		while (b <= 9)
		{
			if (b != a)
			{
				if (a < b)
				{
					putchar(a + '0');
					putchar(b + '0');
					if (!(a == 8 && b == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
