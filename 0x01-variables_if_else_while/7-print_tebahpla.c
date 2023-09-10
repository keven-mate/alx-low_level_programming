#include <stdio.h>

/**
 * main - program that prints the lowercase
 * alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always (0)
 */
int main(void)
{
	char letter = 122;

	while (letter >= 97)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
