#include <stdio.h>

/**
 * main -  main function
 *
 * Return: always (0)
 */

int main(void)
{
	int i;
	char o;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	for (o = 'a' ; o <= 'f' ; o++)
		putchar(o);
	putchar('\n');
	return (0);
}
