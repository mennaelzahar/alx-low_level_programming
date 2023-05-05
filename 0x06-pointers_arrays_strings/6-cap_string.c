#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * cap_string - check the code
 * @str: pointer to char
 * Return: char *
 * Description: string concatination
 */
char *cap_string(char *str)
{
	int i;
	int len = strlen(str);
	int cap_next = 1;

	for (i = 0; i < len; i++)
	{
		if (isspace(str[i]) || ispunct(str[i])) 
		{
			cap_next = 1;
		}
		else if (cap_next)
		{
			str[i] = toupper(str[i]);
			cap_next = 0;
		}
	}
	return (str);
}
