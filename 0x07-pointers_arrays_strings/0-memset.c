#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory area to fill
 * @n: the number of bytes of fill
 * @b: constant byte
 *
 * Return: pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
