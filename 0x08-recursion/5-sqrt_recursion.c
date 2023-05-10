#include "main.h"
#include <string.h>
#include "helper.c"
/**
* _sqrt_recursion - check the code
*@n: int
* Return: int
* Description: print a string
*/



int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 0));
}
