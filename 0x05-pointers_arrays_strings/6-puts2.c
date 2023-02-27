#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 *
 * @str: The string to treated
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	char a = 0;

	while (str[a] ! = '\0')
	{
		a++;
	}

	for (i =0; i < a; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
