#include <stdio.h>

/**
 * main - print the alphabet in reverse
 * followed by a new line
 * Return: always 0 if successful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
