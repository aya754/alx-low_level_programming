#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string be compared
 * @s2: the second string be compared
 *
 * Return: 0 if equal or b if is different
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y = 0;

	while (s1[x] != '\0' && y == 0)
	{
		y = s1[x] - s2[x];
		x++;
	}
	return (y);
}
