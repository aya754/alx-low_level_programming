#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: the string be changed
 *
 * Return: the string that change for uppercase
 */
char *string_toupper(char *)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			`s[i] = s[i] - 32;
			i++;
		}
	}
	return (s);
}
