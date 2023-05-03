#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2_half - check the code.
 * @str: pointer to char
 * Description: 'return string size'
 */

void puts_half(char *str)
{
	int i;
	int size = strlen(str);	

	for (i = size / 2; i < size; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
