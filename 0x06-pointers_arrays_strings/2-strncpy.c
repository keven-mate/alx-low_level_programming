#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: paramater for dest to append to
 * @src: parameter for src
 * @n: parameter for n
 *
 * Return: Always (0)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
