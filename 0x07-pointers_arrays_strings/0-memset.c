#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - check the code
 * @s: string
 * @b: string
 * @n: int
 * Return: char *.
 * Description: setting to 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
