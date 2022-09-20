#include "main.h"

/**
 * _puts - function prints string, followef by newline. Similar
 * to puts function in standard library.
 * @str: pointer character variable
 */
void _puts(char *str)
{
	int a, count, result = 0;

	count = 0;
	while (*(str + count) != '\0')
	{
		result = count + 1;
		count++;
	}

	for (a = 0; a <= result; a++)
		_putchar(str[a]);
}
