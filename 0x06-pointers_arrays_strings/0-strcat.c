#include "main.h"

/**
 * char *_strcat(char *dest, char *src); -
 * function that concatenates two strings.
 * @src: string to copy
 * @dest: copied string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
