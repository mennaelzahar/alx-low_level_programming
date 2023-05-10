#include "main.h"
#include <string.h>

/**
* factorial - check the code
*@n: int
* Return: int
* Description: print a string
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
