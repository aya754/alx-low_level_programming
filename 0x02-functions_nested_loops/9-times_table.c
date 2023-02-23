#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 *
 * Return: empty output
 */
void times_table(void)
{
	int num, multi, result;

	for (num = 0; num < 10; num++)
	{
		for (multi = 1; multi < 10; multi++)
		{
			result = num * multi;
			if (multi == 0)
			{
				_putchar(result + '0');
			}
			if (result < 10 && multi != 0)
			{
				_putchar(',');
				_putchar('');
				_putchar('');
				_putchar(result + '0');
			} else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}

		_putchar('\n');
	}
}

