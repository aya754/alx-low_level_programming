#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - print password.
 *
 * Return: 0.
 */

int main(void)
{
	int ASCII = 2772, i = 0, a, random;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (ASCII > 126)
	{
		random = rand() % 126;
		password[i] = random;
		ASCII -= random;
		i++;
	}
	if (ASCII > 0)
	{
		password[i] = ASCII;
	}
	else
	{
		i--;
	}

	for (a = 0; a <= i; a++)
	{
		printf("%c", password[a]);
	}
	return (0);
}
