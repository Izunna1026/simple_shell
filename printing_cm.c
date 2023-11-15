#include "simpleshell.h"
/**
 * printing_cm - to print the string of environment to stdout
 * Return: to return 0
 */
void printing_cm(void)
{
	int i = 0;
	char **cm = environ;

	while (cm[i])
	{
		write(STDOUT_FILENO, (const void *)cm[i], _strlen(cm[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}
