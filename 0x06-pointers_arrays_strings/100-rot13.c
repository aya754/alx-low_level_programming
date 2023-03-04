#include "main.h"

/**
 * rot13 - encodes a string
 * @n: the input string
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int i, k;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; x[k] != '\0'; k++)
		{
			if (s[i] == x[k])
			{
				s[i] = y[k];
				break;
			}
		}
	}

	return (s);
}
