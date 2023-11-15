#include "simpleshell.h"
/**
 * path_test - validity of the path
 * @p: path break into token
 * @comm: command entered by user
 * Return: to return NULL if fail but with command if success
 */
char *path_test(char **p, char *comm)
{
	char *out;
	int k = 0;

	while (p[k])
	{
		out = add_path(p[k], comm);
		if (access(out, F_OK | X_OK) == 0)
			return (out);
		free(out);
		k++;
	}
	return (NULL);
}
