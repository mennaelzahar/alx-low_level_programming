#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - check the code.
 *@c: intger
 * Return: 1 or 0.
 * Description: 'check if digit'
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
