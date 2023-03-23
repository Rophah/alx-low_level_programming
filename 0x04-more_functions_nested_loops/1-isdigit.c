#include "main.h"

/**
 * _isdigit - check if 0 -9 is present return 0 else return 1
 * @c: char to check
 * Return: return (0) or (1)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
