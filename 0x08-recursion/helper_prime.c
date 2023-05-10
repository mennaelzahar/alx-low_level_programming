#include "main.h"
#include <string.h>

/**
* helper_prime - check the code
*@n: int
*@i: int
* Return: int
* Description: print a string
*/

int helper_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (helper_prime(n, i - 1));
}

