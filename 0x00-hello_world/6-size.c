#include <stdio.h>

/**
 * main - entry point.
 *
 * Return: always 0.
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n", sizeof(a));
	printf("size of a long long int: %lu byte(s)\n", sizeof(b));
	printf("size of a float: %lu byte(s)\n", sizeof(f));
	return(0);
}
