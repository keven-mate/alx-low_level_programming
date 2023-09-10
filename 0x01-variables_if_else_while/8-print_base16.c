#include <stdio.h>

/**
 * main - program that prints all
 * the numbers of base 16 in
 * lowercase, followed by a new line.
 *
 * Return: Always (0)
 */
int main(void)
{
	char letter;
	int number;

	for (number = 0; number <= 9; number++)
		putchar(number + '0');
	for (letter = 97; letter <= 102; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
