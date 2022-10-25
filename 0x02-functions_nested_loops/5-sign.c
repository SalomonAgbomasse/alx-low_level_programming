#include "main.h"

/**
 * pint_sign - checks the given number sign and print
 * @n: The number to be checked
 *
 * Return: 1 if number is greater than 0, 0 if equal 0, -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-1');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
