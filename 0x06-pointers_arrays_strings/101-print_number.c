#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: integer number be printed
 *
 */
void print_number(int n)
{
	insigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');

	}
	else if (n == 0)
	{
		putchar('0');
	}
	else if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
