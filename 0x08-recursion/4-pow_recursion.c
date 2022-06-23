#include <math.h>

/**
 * _pow_recursion - ooooo
 * @x: hhh
 * @y: ddd
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (pow(x, y));
}
