#include <stdio.h>
/**
 * main - entry point.
 *
 * Return: always 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
		for (j = 'A'; j <= 'Z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
		return (0);
}
