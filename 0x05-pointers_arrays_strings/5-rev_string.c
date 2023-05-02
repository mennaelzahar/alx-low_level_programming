#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - check the code.
 * @s: pointer to char
 * Description: 'return string size'
 */

void rev_string(char *s)
{
	int i;
	int size = strlen(s);

	for (i = 0; i < size / 2; i++)
	{
		char tmp = s[i];

		s[i] = s[size - i - 1];
		s[size - i - 1] = tmp;
	}
}
