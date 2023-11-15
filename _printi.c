#include "simpleshell.h"
/**
 * _printi - to print function
 * @word: word to print
 * Return: nothing
 */
void _printi(const char *word)
{
	write(STDOUT_FILENO, word, strlen(word));
}
