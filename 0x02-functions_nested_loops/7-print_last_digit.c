#include "main.h"

/**
 * print_last_digit - print the last ddigit of a number
 *
 * @n: n is an integer
 * Return: the last value of the digit| integer
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}

