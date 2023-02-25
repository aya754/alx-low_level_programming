#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{

	int i, n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
				_putchar('1');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
