#include "main.h"

/**
 * _isalpha - checks for alphabet letter
 *
 * @c: the letter to check.
 * Return: on success 1, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
