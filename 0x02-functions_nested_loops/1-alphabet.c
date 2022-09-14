#include <unistd.h>
#include "main.h"

/**
 * main- prints lowercase alphabets  followed by newline.
 * Return: 0 i.e null after successful completion.
 */
int main(void)
{
	int letters;
	char a[] = "abcdefghijklmnopqrstuvwxyz";

	letters = 0;

	while (letters < 26)
	{
		_putchar(a[letters]);
		letters++;
	}
	_putchar('\n');
	return (0);
}
