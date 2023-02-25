#include <stdio.h>
#include "main.h"

/**
 * main - FizzBuzz
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			prinf("Fizz");
		}
		else if (i % 5 == 0)
		{
			prinf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			prinf("FizzBuzz");
		}
		else
		{
			prinf("%d", i);
		}
		if (i < 100)
		{
			prinf(" ");
		}
	}
	printf("\n");
	return (0);
}
