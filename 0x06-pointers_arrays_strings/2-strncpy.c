#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @src: the pointer that receive the string
 * @dest: array that returns
 * @n: times to iteration
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (x < n && src[y] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	x = x;

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
