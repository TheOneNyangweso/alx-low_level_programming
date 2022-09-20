#include "main.h"

/**
 * puts_half - function prints half of  string, followed by newline.
 * @str: pointer character variable
 */
void puts_half(char *str)
{
	int a, n, count, result = 0;

	count = 0;
	while (*(str + count) != '\0')
	{
		result = count + 1;
		count++;
	}

	for (a = 0; a <= result; a++)
	{
		n = (result - 1) / 2;

		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		if ((result % 2) == 0 && a >= (result / 2))
			_putchar(str[a]);
		else if ((result % 2) != 0 && a >= n)
			_putchar(str[a]);
	}
}
