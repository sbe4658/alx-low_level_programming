#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - prints the last digit of a given number
  *
  * Return: 0 Always -> Success
  */
int main(void)
{
	int n, lDIGIT;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lDIGIT = n % 10;
	if (lDIGIT > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lDIGIT);
	else if (lDIGIT == 0)
		printf("Last digit of %d is %d and is 0\n", n, lDIGIT);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lDIGIT);
	return (0);
}
