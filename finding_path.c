#include "simpleshell.h"
/**
 * finding_path - to look for the path from global
 * Return: to return 0
 */
char *finding_path(void)
{
	char **cm = environ, *p = NULL;
	int i;

	while (*cm)
	{
		if (_strncmp(*cm, "PATH=", 5) == 0)
		{
			p = *cm;
			while (*cm && i < 5)
			{
				p++;
				i++;
			}
			return (p);
		}
		cm++;
	}
	return (NULL);
}
