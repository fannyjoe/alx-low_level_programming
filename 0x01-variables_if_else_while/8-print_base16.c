#include <stdio.h>
/**
 * main - entry point.
 *
 * Return: always 0.
 */
int main(void)
{
	int num;
	char j;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
		for (j = 'a'; j <= 'f'; j++)
		{
			putchar(j);
		}
	putchar('\n');
	return (0);
}
