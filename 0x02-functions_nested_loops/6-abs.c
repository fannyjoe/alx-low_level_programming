#include "main.h"
#include <stddef.h>

/**
 * _abs - calculate the absolute value of an integer.
 *
 * @a: integer to compute.
 * Return: always 0.
 */
int _abs(int)
{
	int a;

	if (a < 0)
	{
		a = -(a);
	}
	else if (a >= 0)
	{
		a = a;
	}
	return (0);
}

