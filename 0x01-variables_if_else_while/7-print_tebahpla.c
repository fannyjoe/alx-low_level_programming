#include <stdio.h>
/**
 * main - entry point.
 *
 * Return: always 0.
 */
int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j--)
		putchar(j);
	putchar('\n');
	return (0);
}
