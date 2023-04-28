#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_number - check the code.
 * @n: int number
 * Description: 'print numbers'
 */
void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
	       	_putchar('-');
		n = -n;
	}
	while (n / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}
}
