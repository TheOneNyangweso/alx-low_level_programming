#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * Return: 0 on success
 */
int main(void)
{
	int a, b, c;

	a = 0;
	while (a <= 8)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			while (c <= 9)
			{
				if (b != a && b != c && (a < b && b < c))
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (!(a == 7 && b == 8 && c == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}

			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
