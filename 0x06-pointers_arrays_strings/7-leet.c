#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * leet - check the code
 * @str: pointer to char
 * Return: char *
 * Description: string concatination
 */
char *leet(char *str)
{
	int i, j;
	char *leet_chars[5] = {"aA", "eE", "oO", "tT", "lL"};
	char *leet_replacements[5] = {"4", "3", "0", "7", "1"};
	int num_leet_chars = 5;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < num_leet_chars; j++)
		{
			if (strchr(leet_chars[j], str[i]) != NULL)
			{
				str[i] = leet_replacements[j][0];
				break;
			}
		}
	}

	return (str);
}
