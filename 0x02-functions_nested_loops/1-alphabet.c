#include <unistd.h>
#include "main.h"

/**
 * main- prints lowercase alphabets  followed by newline.
 * Return: 0 i.e null after successful completion.
 */
int main(void)
{
	char letters;
	char a[] = "";

	letters = 'a';

	while (letters <= 'z')
	{
		_putchar(a[letters]);
		letters++;
	}
	_putchar('\n');
	return (0);
}
