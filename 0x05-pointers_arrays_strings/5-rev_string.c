#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 *
 * @s: The string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length, a, i;
	char S1, S2;

	for (length = 0; s[length] != '\0'; length++)
	{
		a = length - 1;
		i = 0;
	}
	while (a > i)
	{
		S1 = s[i];
		S2 = s[a];
		s[i] = S2;
		s[a] = S1;
		a--;
		i++;
	}
}
