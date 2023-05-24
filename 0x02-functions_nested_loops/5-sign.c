#include "main.h"

/**
 * print_sign - print signs.
 *
 * Return: 1, 0 or -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n <= 0)
	{
		return (0);
		_putchar(48);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	return (0);
}
