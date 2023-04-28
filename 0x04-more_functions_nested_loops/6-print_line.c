#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_line - check the code.
 * @n: int number
 * Description: 'print numbers'
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
