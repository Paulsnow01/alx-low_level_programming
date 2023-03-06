#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * followed by a new line
 * @c: is an integer
 * do not print 2 and 4
 *
 * Return: always 0
 */

void print_print_most_numbers(void)
{
	int c = '0';

	for (; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
