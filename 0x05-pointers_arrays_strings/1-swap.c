#include "main.h"
#include <stdio.h>

/**
 * swap_int- check the code.
 *@a: pointer to intger
 *@b: pointer to intger
 * Description: 'reset_to_98'
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
