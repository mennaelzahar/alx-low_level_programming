#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - check the code
 * @dest: string
 * @src: string
 * @n: int
 * Return: char *.
 * Description: string concatination
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
