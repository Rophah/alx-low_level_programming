#include "main.h"

/**
 * print_alphabet_x10 - print ten times of alphabet
 *
 * Return: always (0)
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
