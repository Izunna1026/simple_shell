#include "simpleshell.h"
/**
 * show_prompt - to show prompt
 * Return: nothing
 */
void show_prompt(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "izu$ ", 5);
}
