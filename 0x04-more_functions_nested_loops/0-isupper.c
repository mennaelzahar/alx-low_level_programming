#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - check the code.
 *@c: intger
 * Return: 1 or 0.
 * Description: 'check for uppercaseness'
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
