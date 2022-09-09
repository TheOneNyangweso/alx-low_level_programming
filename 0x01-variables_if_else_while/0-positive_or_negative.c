#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main-checks if the random number generated is
  *a positive,negative or simply a zero
  *Return: null value i.e 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
