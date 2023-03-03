#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: This is the input array
 * @n : The number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
		n--;
		i++;
	}
}
