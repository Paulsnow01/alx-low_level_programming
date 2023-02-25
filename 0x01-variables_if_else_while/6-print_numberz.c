#include <stdio.h>

/**
 * main - print all the single digit numbes of base 10 starting from 0
 * followed by a new line
 * Return: always 0 if successful
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
