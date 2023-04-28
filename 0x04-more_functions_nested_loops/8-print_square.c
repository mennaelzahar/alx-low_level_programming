#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_square - check the code.
 * @size: int number
 * Description: 'print numbers'
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
