#include <stdio.h>
#include <unistd.h>

/**
 * main- the main function prints the output as per the instructions
 * given
 * Return: 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	write(1, '\n', 2); 
	return (1);
}
