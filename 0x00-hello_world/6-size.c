#include <stdio.h>

/**
 * main - C program that prints the size of various
 * types on the computer it is compiled and run on.
 *
 * Return: Always (0)
 */
int main(void)
{
		int integer;
		char character;
		long int long_integer;
		float real_num;
		long long int extra_long_integer;

		printf("Size of a char: %d byte(s)\n", sizeof(character));
		printf("Size of an int: %d byte(s)\n", sizeof(integer));
		printf("Size of a long int: %d byte(s)\n", sizeof(long_integer));
		printf("Size of a long long int: %d byte(s)\n", sizeof(extra_long_integer));
		printf("Size of a float: %d byte(s)\n", sizeof(real_num));
		return (0);
}
