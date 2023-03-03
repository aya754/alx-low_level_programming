#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @src: This is the input src
 * @dest: This is the output dest
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}
