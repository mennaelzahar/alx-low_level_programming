#include <stdlib.h>
#include "main.h"

/**
 * jack_bauer- prints last digit of num
 * Description: returns last digit of num
 */
void jack_bauer(void)
{
	int i, j, x, y;

	for (i = 0; i <= 2; i++)
	{
		if (i < 2)
			for (j = 0; j <= 9; j++)
				for (x = 0; x <= 5; x++)
					for (y = 0; y <= 9; y++)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + x);
						_putchar('0' + y);
						_putchar('\n');
					}
		if (i == 2)
			for (j = 0; j <= 3; j++)
				for (x = 0; x <= 5; x++)
					for (y = 0; y <= 9; y++)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + x);
						_putchar('0' + y);
						_putchar('\n');
					}
	}

}
