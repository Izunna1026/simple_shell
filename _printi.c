#include "simpleshell.h"
/**
 * _putchar - to act as putchar
 * @c: to printer the character
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _printi - to print string
 * @k: the string to print
 * Return: to print the whole string
 */
int _printi(char *k)
{
	int v = 0;

	while (k[v] != '\0')
	{
		_putchar(k[v]);
		v++;
	}
	return (v);
}
