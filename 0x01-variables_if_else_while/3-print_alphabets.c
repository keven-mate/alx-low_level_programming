#include <stdio.h>

/**
 * main - program that prints the alphabet
 * in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: Always (0)
 */
int main(void)
{
	char letter = 97;
	char caps = 65;

	while (letter < 123)
	{
		putchar(letter);
		letter++;
	}
	while (caps < 91)
	{
		putchar(caps);
		caps++;
	}
	putchar('\n');
	return (0);
}
