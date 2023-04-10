#include "main.h"

/**
 * _pow_recursion - fills memory with a constant byte.
 * @x: first bytes of the memory
 * @y: first bytes of the memory
 * Return: -
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x *  _pow_recursion(x, y - 1));
}
