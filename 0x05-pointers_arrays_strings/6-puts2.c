#include "main.h"

/**
 * puts2 - function prints string, followef by newline. Similar
 * to puts function in standard library.
 * @str: pointer character variable
 */
void puts2(char *str)
{
	int a, count, result = 0;

	count = 0;
	while (*(str + count) != '\0')
	{
		result = count + 1;
		count++;
	}

	for (a = 0; a <= result; a += 2)
	{
		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(str[a]);
	}
}
