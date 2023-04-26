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
	char buffer[6];

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			int j;

			sprintf(buffer, "%d, ", i);
			for (j = 0; buffer[j] != '\0'; j++)
			{
				_putchar(buffer[j]);
			}
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			int j;

			sprintf(buffer, "%d, ", i);
			for (j = 0; buffer[j] != '\0'; j++)
			{
				_putchar(buffer[j]);
			}
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
