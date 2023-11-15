#include "simpleshell.h"
/**
 * builtin_handler - to work n builtin functions
 * @comm: from token split
 * @l: the stdin input
 * Return: to return 1 if success but 0 if fails
 */
int builtin_handler(char **comm, char *l)
{
	struct builtin builtin = {"cm", "exit"};

	if (_strcmp(*comm, builtin.cm) == 0)
	{
		printing_cm();
		return (1);
	}
	else if (_strcmp(*comm, builtin.exit) == 0)
	{
		close_page(comm, l);
		return (1);
	}
	return (0);
}
