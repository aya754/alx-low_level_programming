#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @s: String be encoded
 *
 * Return: The encode string
 */
char *leet(char *s)
{
	int i, k;

	char l[] = "aAeEoOtTlL";
	char e[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		k = 0;
		while (l[k] != '\0')
		{
			if (s[i] == l[k])
			{
				s[i] = e[k];
			}
			k++;
		}
		i++;
	}
	return (s);
}
