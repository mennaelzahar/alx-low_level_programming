#include "main.h"
#include <string.h>
#include "helper_prime.c"
/**
* is_prime_number - check the code
*@n: int
* Return: int
* Description: print a string
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (helper_prime(n, n - 1));
}
