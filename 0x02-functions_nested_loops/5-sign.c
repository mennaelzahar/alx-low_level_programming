#include <ctype.h>
#include "main.h"

/**
 * print_sign - checks sign
 * @n: a int  member
 * Return: 0 for zero  1 for pos -1 for neg
 * Description: checks for sign
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar('1');
		return (1);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar('/');
		return (-1);
	}
}
