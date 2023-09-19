#include "main.h"

/**
 * puts_half - function that prints
 * second half of a string
 * followed by a new line
 * @str: string to be tested
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = (i + 1) / 2; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
