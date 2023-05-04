#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * cap_string - check the code
 * @a: pointer to char
 * Return: char *
 * Description: string concatination
 */
char *cap_string(char *a)
{
	int i;
	int size = strlen(a);
	char *separators = ",;.!?\"(){} \t\n";

	for (i = 1; i < size; i++)
	{
		char c = a[i - 1];

		if (strchr(separators, c) != NULL)
		{
			if ((a[i] >= 97) && (a[i] <= 122))
				a[i] = a[i] - 32;
		}
	}
	return (a);
}
