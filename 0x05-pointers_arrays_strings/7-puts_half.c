#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: The string to treated
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0
		int a;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		a = (i - 1) / 2;
		a += 1;
	}
	else
	{
		a = i / 2;
	}

	for (; a < i; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
