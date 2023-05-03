#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - check the code.
 * @a: pointer to int
 * @n: int
 * Description: 'return string size'
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
