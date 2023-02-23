#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 *
 * Return: empty output
 */
void times_table(void)
{
	int num, multi, result;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');
			result = num * multi;
			if (result <= 9)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
