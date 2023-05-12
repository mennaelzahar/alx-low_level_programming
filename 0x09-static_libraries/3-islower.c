#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: a character member
 * Return: 0 for uppercase 1 for lowercase
 * Description: checks for lowecaseness
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
