#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - check the code.
 * @str: pointer to char
 * Description: 'return string size'
 */

void puts2(char *str)
{
	int i;
	int size = strlen(str);

	for (i = 0; i < size; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
