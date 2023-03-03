#include "main.h"

/**
 * cap_string - capitalizes words of a string
 * @s: The string to change the first letter of a word in uppercase
 *
 * Return: capitalizes letters
 */
char *cap_string(char *s)
{
	int i, k;

	char c[] = {32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 9, 10, 0};

	i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		k = 0;
		while (c[k] != '\0')
		{
			if (c[k] == s[i] && (s[i + 1] >= 97 && s[i + 1] <= 122))
			{
				s[i + 1] = s[i + 1] - 32;
			}
			k++;
		}
		i++;
	}
	return (s);
}
