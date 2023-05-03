#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - check the code.
 * @str: pointer to char
 * Description: 'return string size'
 */

void puts_half(char *str)
{
	int i;
	int size = strlen(str);
	int n;

	if ((size & 1) == 0)
		n = size / 2;
	else
		n = (size / 2) + 1;
	for (i = n; i < size; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
