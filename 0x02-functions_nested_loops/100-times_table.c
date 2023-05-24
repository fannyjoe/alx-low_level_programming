#include <stdio.h>

/**
 * print_times_table _ print n times
 * table.
 *
 * @n: number of times to print.
 * Return: always 0.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;
	int l;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		k = i * j;
		}
	if (k < 9)
	{
	l = k % 10;
	m = (k - l) / 10;
	putchar(44);
	putchar(32);
	putchar(m + '0');
	putchar(l + '0');
	}	
	else
	{
		if (j != 0)
		{
		putchar(44);
		putchar(32);
		}
		putchar(k + '0');
	}
	}
	putchar('\n');
	i = n % 10;
	if (n > 15 || n < 0)
		printf(" ");
}	
