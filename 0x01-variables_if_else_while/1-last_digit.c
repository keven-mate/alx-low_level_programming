#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program will assign a random number to the
 * variable n each time it is executed. Complete
 * the source code in order to print the last
 * digit of the number stored in the variable n.
 *
 * Return: Always (0)
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit > 5)
	{
		printf("Last digit of %d is %d and", n, digit);
		printf(" is greater than 5\n");
	}
	else if (digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, digit);
	}
	else
	{
		printf("Last digit of %d is %d and is ", n, digit);
		printf("less than 6 and not 0\n");
	}
	return (0);
}
