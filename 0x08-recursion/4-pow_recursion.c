#include "main.h"

/**
 *  _pow_recursion - calculate the power
 *
 *  @x: para1
 *  @y: para2
 *
 *  Return: result
 */

int  _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
