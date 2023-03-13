#include "main.h"

/**
 * _mcmcpy - irontoux2
 * @dest:  pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: *dest
 */

char *_mcmcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
