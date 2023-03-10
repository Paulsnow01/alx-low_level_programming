#include "main.h"

/**
 * puts2 - print every other character of a string.
 * followed by a new line
 * @s: string
 * return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
