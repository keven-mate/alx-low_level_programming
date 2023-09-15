#include "main.h"

/**
 * print_numbers - function that
 * prints the numbers,
 * from 0 to 9,
 * followed by a new line.
 *
 * Return: Always (0)
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
_putchar('\n');
}
