#include <stdio.h>

/**
 * main - program that prints the
 * alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Always (0)
 */
int main(void)
{
	char letter = 97;

	while (letter < 123)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
