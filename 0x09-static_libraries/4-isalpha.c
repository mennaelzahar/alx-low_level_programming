#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if a character is in alphabet
 * @c: a character member
 * Return: 0 for no 1 for yes
 * Description: checks if a character is an alphabet
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
