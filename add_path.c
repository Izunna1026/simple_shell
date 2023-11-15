#include "simpleshell.h"
/**
 * add_path - to add path to the existing path
 * @p: the path
 * @comm: command entered by the user
 * Return: to ruturn positive on success but NULL on failure
 */
char *add_path(char *p, char *comm)
{
	size_t k = 0, x = 0;
	char *buff;

	if (comm == 0)
		comm = "";
	if (p == 0)
		p = "";

	buff = malloc(sizeof(char) * (_strlen(p) + _strlen(comm) + 2));
	if (!buff)
		return (NULL);
	while (p[k])
	{
		buff[k] = p[k];
		k++;
	}
	if (p[k - 1] != '/')
	{
		buff[k] = '/';
		k++;
	}
	while (comm[x])
	{
		buff[k + x] = comm[x];
		x++;
	}
	buff[k + x] = '\0';
	return (buff);
}

