#include "simpleshell.h"
/**
 * _printi - to print function
 * @word: word to print
 * Return: nothing
 */
void _printi(char *word)
{
	write(STDOUT_FILENO, word, _strlen(word));
}
