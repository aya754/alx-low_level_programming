#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse
 *
 * @str: The string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		c++;
	}
	for (r -= 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
