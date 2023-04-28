#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_triangle - check the code.
 * @size: int number
 * Description: 'print numbers'
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (k = 0; k < size; k++)
	{
		for (j = 0; j < (size - k - 1); j++)
		{
			_putchar(' ');
		}
		for (i = 0; i <= k; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
