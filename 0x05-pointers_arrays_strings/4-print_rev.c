#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - check the code.
 * @s: pointer to char
 * Description: 'return string size'
 */

void print_rev(char *s)
{
	int i;
	int size = strlen(s);

	for (i = size - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
