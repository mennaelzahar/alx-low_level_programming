#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			int digit = i;

			if (digit < 0)
			{
				_putchar('-');
				digit = -digit;
			}

			do {
				_putchar(digit % 10 + '0');
				digit /= 10;
			} while (digit > 0);

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			int digit = i;

			do {
				_putchar(digit % 10 + '0');
				digit /= 10;
			} while (digit > 0);

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}

