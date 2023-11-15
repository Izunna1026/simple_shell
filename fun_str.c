#include "simpleshell.h"
/**
 * _strlen - calculate length of string
 * @k: the string to calculate
 * Return: to return length of k
 */
int _strlen(char *k)
{
	int c = 0;

	while (*k != '\0')
	{
		c++;
		k++;
	}
	return (c);
}
/**
 * _strdup - to double string
 * @k: the string
 * Return: to return the double
 */
char *_strdup(char *k)
{
	int x, l;
	char *p;

	if (k == NULL)
		return (NULL);
	l = _strlen(k);
	p = malloc(sizeof(char) * (l + 1));

	if (!p)
		return (NULL);
	for (x = 0; *k != '\0'; k++, x++)
		p[x] = k[0];
	p[x++] = '\0';
	return (p);
}

/**
 * _strcmp - to compare 2 string
 * @k1: first string
 * @k2: second string
 * Return: to return the difference
 */
int _strcmp(char *k1, char *k2)
{
	int v = 0, out;

	while (*(k1 + v) == *(k2 + v) && *(k1 + v) != '\0')
		v++;
	out = (*(k1 + v) - *(k2 + v));
	return (out);
}

/**
 * _strncmp - to compare 2 string to n bytes
 * @k1: first string
 * @k2: second string
 * @n: bytes
 * Return: the difference
 */
int _strncmp(char *k1, char *k2, int n)
{
	int v;

	for (v = 0; k1[v] && k2[v] && v < n; v++)
	{
		if (k1[v] != k2[v])
			return (k1[v] - k2[v]);
	}
	return (0);
}

/**
 * _strchr - find a character in a string
 * @k: the string
 * @c: the character to find
 * Return: to return the first character found
 */
char *_strchr(char *k, char c)
{
	while (*k)
	{
		if (*k == c)
			return (k);
		k++;
	}
	if (!c)
		return (k);
	return (NULL);
}

