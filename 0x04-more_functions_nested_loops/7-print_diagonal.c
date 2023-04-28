#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_diagonal - check the code.
 * @n: int number
 * Description: 'print numbers'
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
