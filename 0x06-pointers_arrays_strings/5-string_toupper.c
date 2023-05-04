#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_toupper - check the code
 * @a: pointer to char
 * Return: char *
 * Description: string concatination
 */
char *string_toupper(char *a)
{
	int i;
	int size = strlen(a);

	for (i = 0; i < size; i++)
	{
		if ((a[i] >= 97) && (a[i] <= 122))
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
