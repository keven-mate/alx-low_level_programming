#include <stdio.h>

/**
 * main - program that prints the alphabet
 * in lowercase,
 * followed by a new line.
 * Print all the letters except q and e
 *
 * Return: Always (0)
 */
int main(void)
{
	char letter = 97;

	while (letter < 123)
	{
		if (letter != 101 && letter != 113)
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
