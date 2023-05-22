#include <stdio.h>
/**
 * main - entry point.
 *
 * Return : always 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
	for (j = 1; j < 10; j++)
	{
		putchar(i + '0');
	putchar(j + '0');
	if (i <= 98)
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
