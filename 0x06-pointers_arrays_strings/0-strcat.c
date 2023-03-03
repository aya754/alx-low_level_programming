#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @src: This is the input string
 * @dest: This is the output string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;

	while (src[x] != '\0')
	{
		x++;
	}

	y = 0;

	while (dest[y] != '\0')
	{
		dest[y] = src[x];
		x++;
		y++;
	}
	return (dest);
}
