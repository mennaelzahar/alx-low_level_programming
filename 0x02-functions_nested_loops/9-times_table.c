#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * times_table- prints last digit of num
 * Description: returns last digit of num
 */
void times_table(void)
{
	int i, j, r;
	int tens, ones;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if (r > 9)
			{
				tens = r / 10;
				ones = r % 10;
				_putchar('0' + tens);
				_putchar('0' + ones);
			}
			else
				_putchar('0' + r);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
