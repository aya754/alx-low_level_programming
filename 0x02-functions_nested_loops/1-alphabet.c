/**
 * main -  prints the alphabet - in lowercase
 * followed by a new line
 *
 * Return: void.
 */
#include "main.h"
void print_alphabet(void);
{
	char ch;

	for (ch = 'a'; ch = 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
