#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- main function generates random number and checks if last digit
 * of the latter satisfies the given condition
 * Return: null i.e  0
 */
int main(void)
{
	int n, a;
	char s[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
		printf("%s %d is %d and is greater than 5\n", s, n, a);
	if (a == 0)
		printf("%s %d is %d and is 0\n", s, n, a);
	if (a < 6)
		printf("%s %d is %d and is less than 6 and not 0:\n", s, n, a);
	return (0);
}
