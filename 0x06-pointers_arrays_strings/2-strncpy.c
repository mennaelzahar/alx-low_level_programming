#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - check the code
 * @dest: string
 * @src: string
 * @n: int
 * Return: char *.
 * Description: string concatination
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
