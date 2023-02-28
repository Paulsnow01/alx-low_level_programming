#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n: n is an integer
 * Return: 1 and print + if n is greater than zero, 0 if n eqauls zero and -1 if n is less than zero
 */
int print_sign(int n)

{
	if (n < 0)
	{
		_putchar('+');
		return(1);
	}
	else if (n = 0)
	{
		_putchar('-');
		return(1);
	}
	else if (n > 0)
	{
		_putchar(0);
		return(0);
	}
}
