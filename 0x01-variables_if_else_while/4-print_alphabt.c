#include <stdio.h>

/**
 * main - printthe alphabet in lowercase
 * followed by a new line
 * print all the letters except "q" and "e"
 * Return: always 0 if successful
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
