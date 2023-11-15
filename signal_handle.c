#include "simpleshell.h"
/**
 * signal_handle - to keep handling interactive mode
 * @n : number of signal
 * Return: to return 0
 */

void signal_handle(int n)
{
	(void)n;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
