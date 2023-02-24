#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * then in uppercase
 * followed by a new line
 * Return: always 0 if successful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar ('\n');
	return (0);
}
