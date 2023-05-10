#include "main.h"
#include <string.h>
#include <math.h>
/**
* helper - check the code
*@n: int
*@i: int
* Return: int
* Description: print a string
*/

int helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (helper(n, i + 1));
}
