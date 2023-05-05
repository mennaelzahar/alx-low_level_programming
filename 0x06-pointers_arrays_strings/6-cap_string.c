#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i, j;
	int cap_next = 1;
	int len = strlen(str);
	char separators[] = " \t\n,;.!?\"(){}";
	int num_separators = strlen(separators);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < num_separators; j++)
		{
			if (str[i] == separators[j])
			{
				cap_next = 1;
				break;
			}
		}
		if (j == num_separators)
		{
			if (cap_next)
			{
				str[i] = toupper(str[i]);
				cap_next = 0;
			}
		}
	}
	return (str);
}

