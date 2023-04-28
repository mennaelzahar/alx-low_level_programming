#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_numbers - check the code.
 * Description: 'check if digit'
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
