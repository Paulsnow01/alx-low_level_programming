#include <stdio.h>

/**
 * main - print all combinations of single digits of numbers
 * followed by a new line
 * Return: always 0 if successful
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
