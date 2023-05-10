#include "main.h"
#include <string.h>

/**
* _pow_recursion - check the code
*@x: int
*@y: int
* Return: int
* Description: print a string
*/
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	y--;
	return (x * _pow_recursion(x, y));
}
