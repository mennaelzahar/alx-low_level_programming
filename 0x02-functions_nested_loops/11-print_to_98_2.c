#include <stdlib.h>
#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * print_to_98- prints from n to 98
 * @n: a int  member
 * Description: returns last digit of num
 */


int count_digits(int num)
{
	int count = 0;
	
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}


void print_to_98(int n)
{
	int i, x, digits;

	if (n <= 98)
		for (i = n; i <= 98; i++)
		{
			if (i > 9)
			{
				int num = i;
				int j;

				digits = count_digits(num);
				for (j = 0; j < digits; j++)
				{
					x = i % 10;
					_putchar('0' + x);
				}
			}
			else
				_putchar('0' + i);
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	else
		for (i = n; i >= 98; i--)
		{
			if (i > 9)
			{
				int num = i;
				int j;

				digits = count_digits(num);
				for (j = 0; j < digits; j++)
				{
					x = i % 10;
					_putchar('0' + x);
				}
			}
			else
				_putchar('0' + i);
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
}
