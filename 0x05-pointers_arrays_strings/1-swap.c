#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: int number 1 to swap
 * @b: int number 2 to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
