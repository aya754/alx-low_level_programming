#include <stdio.h>

/**
 * print_number - function that prints an integer
 * @n: int type number
 *
 */
void print_number(int n)
{
	int n;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	else if (n == 0)
	{
		putchar('0');
	}
	else if (n / 10)
	{
		printnumber(n / 10);
	}
	putchar(n % 10 + '0');
}
