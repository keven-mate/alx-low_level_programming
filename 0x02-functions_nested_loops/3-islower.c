#include "main.h"

/**
 * _islower - function that checks for
 * lowercase character.
 * @c: Character to be checked
 * Return: 1 if character is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
