#include "main.h"

/**
 * main - print the alphabet in lowercase
 * folllowed by a new line
 * Return: always 0 if successful
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
