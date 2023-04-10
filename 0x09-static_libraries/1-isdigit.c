#include "main.h"

/**
 * _isdigit - entry point
 * @c: c is a digit
 *
 * Description: checks for a digit (0 through 9).
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
