#include  "main.h"

/**
 * main -print_alphabet_x10
 * print_alphabet_x10p Prints the alphabet in lowercase.
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i++ <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			_putchar('\n');

		}
	}
}
