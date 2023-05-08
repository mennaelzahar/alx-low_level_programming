#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - check the code
 * @s: char *
 * @accept: char *
 * Return: unsigned int
 * Description: setting to 0
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
